
        
                message = '#{tag} (fastlane)'
        expect(result).to eq('git tag -am #{message.shellescape} #{tag.shellescape}')
      end
    
          it 'handles the extension parameter correctly' do
        result = Fastlane::FastFile.new.parse('lane :test do
          ensure_no_debug_code(text: 'pry', path: '.', extension: 'rb')
        end').runner.execute(:test)
        expect(result).to eq('grep -RE 'pry' '#{File.absolute_path('./')}' --include=\\*.rb')
      end
    
          it 'works with single quote in rule name' do
        rule = 'CoveredSwitchStatementsDon'tNeedDefault'
        result = Fastlane::FastFile.new.parse('lane :test do
            oclint(
              compile_commands: './fastlane/spec/fixtures/oclint/compile_commands.json',
              enable_rules: [\'#{rule}\'],
              disable_rules: [\'#{rule}\']
            )
          end').runner.execute(:test)
    
    # test monkey patched method on both (simulated) OSes
describe 'monkey patch of String.shellescape (via CrossplatformShellwords)' do
  describe 'on Windows' do
    before(:each) do
      allow(FastlaneCore::Helper).to receive(:windows?).and_return(true)
    end
    
    MESSAGE
  end
    
            warden.logout(scope)
        warden.clear_strategies_cache!(scope: scope)
        instance_variable_set(:'@current_#{scope}', nil)
    
          # Stores the provided location to redirect the user after signing in.
      # Useful in combination with the `stored_location_for` helper.
      #
      # Example:
      #
      #   store_location_for(:user, dashboard_path)
      #   redirect_to user_facebook_omniauth_authorize_path
      #
      def store_location_for(resource_or_scope, location)
        session_key = stored_location_key_for(resource_or_scope)
        
        path = extract_path_from_location(location)
        session[session_key] = path if path
      end
    
    module Devise
  module Models
    # Timeoutable takes care of verifying whether a user session has already
    # expired or not. When a session expires after the configured time, the user
    # will be asked for credentials again, it means, they will be redirected
    # to the sign in page.
    #
    # == Options
    #
    # Timeoutable adds the following options to devise_for:
    #
    #   * +timeout_in+: the interval to timeout the user session without activity.
    #
    # == Examples
    #
    #   user.timedout?(30.minutes.ago)
    #
    module Timeoutable
      extend ActiveSupport::Concern
    
        def execute
      temp_path = generate_temporary_path
      packet_gem = Paquet::Gem.new(temp_path, LogStash::Environment::CACHE_PATH)
    
    shared_examples 'logstash list' do |logstash|
  describe 'logstash-plugin list on #{logstash.hostname}' do
    before(:all) do
      logstash.install({:version => LOGSTASH_VERSION})
    end
    
            it 'successfully processes' do
          uploader_class.process :convert => 'jpg'
          uploader.process!
        end
    
    require 'rspec'
require 'carrierwave'
require 'webmock/cucumber'
    
          private
      def interpolate_paperclip_path(path)
        mappings.each_pair.inject(path) do |agg, pair|
          agg.gsub(':#{pair[0]}') { pair[1].call(self, self.paperclip_style).to_s }
        end
      end
    end # Paperclip
  end # Compatibility
end # CarrierWave

    
      describe '.some_class_method' do
    it 'does something' do
      # ...
    end
  end