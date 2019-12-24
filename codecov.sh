#!/bin/bash
# Create lcov report
lcov --directory . --capture --output-file coverage.info
# filter out system and extra files.
lcov --remove coverage.info '/usr/*' "${HOME}"'/.cache/*' \
    'test.cpp' 'tests/*' --output-file coverage.info
# output coverage data for debugging (optional)
lcov --list coverage.info
# Uploading to CodeCov
# '-f' specifies file(s) to use and disables manual coverage
# gathering and file search which has already been done above
bash <(curl -s https://codecov.io/bash) -f coverage.info || \
    echo "Codecov did not collect coverage reports"
