
        
                expect(result).to eq('carthage bootstrap')
      end
    
          it 'Does not accept an invalid value for :merge_commit_filtering' do
        values = Fastlane::Actions::GIT_MERGE_COMMIT_FILTERING_OPTIONS.map { |o| ''#{o}'' }.join(', ')
        error_msg = 'Valid values for :merge_commit_filtering are #{values}'
    
            allow(File).to receive(:file?).and_return(false)
        allow(File).to receive(:file?).with(keychain_path).and_return(true)
        allow(File).to receive(:exist?).and_return(false)
        expect(File).to receive(:exist?).with(cert_name).and_return(true)
        expect(FastlaneCore::Helper).to receive(:backticks).with(expected_set_key_partition_list_command, print: false)
        expect(FastlaneCore::Helper).to receive(:backticks).with(expected_security_import_command, print: false)
    
    module CrossplatformShellwords
  # handle switching between implementations of shellescape
  def shellescape(str)
    if FastlaneCore::Helper.windows?
      WindowsShellwords.shellescape(str)
    else
      # using `escape` instead of expected `shellescape` here
      # which corresponds to Shellword's `String.shellescape` implementation
      # https://github.com/ruby/ruby/blob/1cf2bb4b2085758112503e7da7414d1ef52d4f48/lib/shellwords.rb#L216
      Shellwords.escape(str)
    end
  end
  module_function :shellescape
    
          it 'uses the correct command to import it' do
        # We have to execute *something* using ` since otherwise we set expectations to `nil`, which is not healthy
        `ls`
    
              config = FastlaneCore::Configuration.create(c, {
            true_value: 'true',
            true_value2: 'YES',
            false_value: 'false',
            false_value2: 'NO'
          })
    
    module Admin
  class ConfirmationsController < BaseController
    before_action :set_user
    before_action :check_confirmation, only: [:resend]
    
        def set_custom_emoji
      @custom_emoji = CustomEmoji.find(params[:id])
    end
    
          redirect_to admin_report_path(@report)
    end
    
      def account_feed_path?
    hub_topic_params[:controller] == 'accounts' && hub_topic_params[:action] == 'show' && hub_topic_params[:format] == 'atom'
  end
end

    
          def response
        return @response if defined? @response