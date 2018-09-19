
        
        # This is the version that ships with OS X 10.10, so be sure we test against it.
# At the same time, the 1.7.7 version won't install cleanly on Ruby > 2.2,
# so we use a fork that makes a trivial change to a macro invocation.
gem 'json', :git => 'https://github.com/segiddins/json.git', :branch => 'seg-1.7.7-ruby-2.2'
    
      if ARGV.include? '--no-ansi'
    STDERR.puts <<-DOC
    WARNING: CocoaPods requires your terminal to be using UTF-8 encoding.
    Consider adding the following to ~/.profile:
    
    # Ensure the `pod` bin doesn’t think it needs to use Bundler.
ENV['COCOAPODS_NO_BUNDLER'] = '1'
    
    # It is very likely that we'll need these and as some of those paths will atm
# result in a I18n deprecation warning, we load those here now so that we can
# get rid of that warning.
require 'active_support/core_ext/string/strip'
require 'active_support/core_ext/string/inflections'
require 'active_support/core_ext/array/conversions'
# TODO: check what this actually does by the time we're going to add support for
# other locales.
require 'i18n'
if I18n.respond_to?(:enforce_available_locales=)
  I18n.enforce_available_locales = false
end
    
        # Returns a new {Installer} parametrized from the {Config}.
    #
    # @return [Installer]
    #
    def installer_for_config
      Installer.new(config.sandbox, config.podfile, config.lockfile)
    end