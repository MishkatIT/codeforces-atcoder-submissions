# 📋 Changelog

All notable changes to **Harwest** will be documented in this file.

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.0.0/),
and this project adheres to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

## [Unreleased]

### Added
- Enhanced push reliability with automatic force-push fallback for non-fast-forward rejections
- Improved error handling in repository operations

### Changed
- Modified git pull operations to use merge instead of rebase for better conflict resolution
- Updated fresh start push to use force push for reliable configuration deployment

### Fixed
- Repository push failures due to branch being behind remote
- Git rebase conflicts during automated harvesting

## [0.3.2] - 2026-01-20

### Added
- **Harwest Control Panel** (`harwest_control_panel.bat`) - The one batch to rule them all!
  - Interactive menu system for easy harvesting
  - Support for normal and full scans
  - Batch automation for both platforms
- Enhanced markdown generation with improved problem tracking
- Better progress indicators during submission fetching

### Changed
- **v2.0 System Upgrade** with enhanced automation and improved user experience
- Consolidated repository structure for better organization
- Improved git workflow with better conflict resolution

### Fixed
- Various submission parsing issues
- Git operation reliability improvements
- Better handling of platform-specific data

## [0.3.1] - 2025-12-15

### Added
- Support for multiple usernames per platform
- Enhanced README.md auto-update with platform badges
- Improved submission metadata tracking

### Changed
- Better error messages and user feedback
- Optimized submission fetching algorithms

### Fixed
- Issues with concurrent git operations
- Memory usage improvements for large submission histories

## [0.3.0] - 2025-11-01

### Added
- **Automated Harvesting via GitHub Actions**
  - Daily automatic submission harvesting
  - Configurable workflow triggers
  - Status badges integration
- **Fresh Start Setup Script** (`fresh_start.py`)
  - Interactive repository configuration
  - Data clearing and reset functionality
  - Git author setup automation
- **Multi-platform Support**
  - Codeforces integration
  - AtCoder integration
- **Markdown Generation**
  - Automatic problem list generation
  - Profile badge integration
  - Submission statistics

### Changed
- Complete rewrite for better maintainability
- Improved CLI interface with better argument handling
- Enhanced configuration system

## [0.2.0] - 2025-08-20

### Added
- Basic Codeforces submission harvesting
- Git integration for automatic commits
- JSON-based submission storage
- Command-line interface

### Changed
- Initial public release structure

## [0.1.0] - 2025-07-01

### Added
- Initial project setup
- Basic submission fetching capabilities
- Repository structure foundation

---

## 📖 How to Use Release Notes

### For Users
- **Check the [Unreleased] section** for upcoming features and fixes
- **Review changes** before updating to understand what might affect your setup
- **Breaking changes** are marked with ⚠️ and require attention

### For Contributors
- **Add new changes** to the [Unreleased] section during development
- **Move to versioned release** when creating a new version tag
- **Follow the format**: `### Added/Changed/Fixed/Removed/Security`

### Release Process
1. **Update version** in `harwest/__init__.py`
2. **Move [Unreleased] changes** to new version section
3. **Add release date** in YYYY-MM-DD format
4. **Create git tag** with version number
5. **Push tag** to trigger release

### Types of Changes
- **`Added`** - New features
- **`Changed`** - Changes in existing functionality
- **`Deprecated`** - Soon-to-be removed features
- **`Removed`** - Removed features
- **`Fixed`** - Bug fixes
- **`Security`** - Security-related changes

---

**Legend:**
- 🚀 Major new features
- 🔧 Improvements and fixes
- 🐛 Bug fixes
- 📚 Documentation updates
- 🔒 Security updates</content>
<parameter name="filePath">d:\codeforces-atcoder-submissions\CHANGELOG.md