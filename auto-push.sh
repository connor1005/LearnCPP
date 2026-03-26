#!/bin/bash
git add .
git commit -m "Auto backup: $(date +%Y-%m-%d)"
git push origin main
