
        
              # Topic may be hard deleted due to spam, no point complaining
      # we would have to look at the topics table id sequence to find cases
      # where this was called with an invalid id, no point really
      return unless topic.present?
    
      describe '.create' do
    it 'creates a key with the client' do
      expected_service_configs = {
        'U27F4V844T' => [],
        'DQ8HTZ7739' => [],
        '6A7HVUVQ3M' => ['some-music-id']
      }
      mock_client_response(:create_key!, with: { name: 'New Key', service_configs: expected_service_configs }) do
        {
          keyId: 'a-new-key-id'
        }
      end
    
    module Fastlane
  class CrashlyticsProjectParser
    # @param project_file_path path to a .xcodeproj file
    def initialize(config = {})
      FastlaneCore::Project.detect_projects(config)
      @project = FastlaneCore::Project.new(config, xcodebuild_list_silent: true, xcodebuild_suppress_stderr: true)
    
        context 'Mercurial repository' do
      before do
        allow(Fastlane::Actions::GetBuildNumberRepositoryAction).to receive(:is_svn?).and_return(false)
        allow(Fastlane::Actions::GetBuildNumberRepositoryAction).to receive(:is_git_svn?).and_return(false)
        allow(Fastlane::Actions::GetBuildNumberRepositoryAction).to receive(:is_git?).and_return(false)
        expect(Fastlane::Actions::GetBuildNumberRepositoryAction).to receive(:is_hg?).and_return(true)
      end
    
          it 'gets the correct version number for 'TargetBTests'' do
        result = Fastlane::FastFile.new.parse('lane :test do
          get_version_number(xcodeproj: '.xcproject', target: 'TargetBTests')
        end').runner.execute(:test)
        expect(result).to eq('5.4.3')
      end
    
      def failure_message
    exception = request.respond_to?(:get_header) ? request.get_header('omniauth.error') : request.env['omniauth.error']
    error   = exception.error_reason if exception.respond_to?(:error_reason)
    error ||= exception.error        if exception.respond_to?(:error)
    error ||= (request.respond_to?(:get_header) ? request.get_header('omniauth.error.type') : request.env['omniauth.error.type']).to_s
    error.to_s.humanize if error
  end
    
        def confirmation_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :confirmation_instructions, opts)
    end
    
    class TestApp < Rails::Application
  config.root = File.dirname(__FILE__)
  config.session_store :cookie_store, key: 'cookie_store_key'
  secrets.secret_token    = 'secret_token'
  secrets.secret_key_base = 'secret_key_base'
  config.eager_load = false
    
          opts[:format] = request_format unless skip_format?
    
          def to_s
        @pairs.inspect
      end
    end
  end
end

    
            def update
          authorize! :update, @order, order_token
          @address = find_address
    
        # called by storage after the writes are flushed and before @queued_for_write is cleared
    def after_flush_writes
      unlink_files(@queued_for_write.values)
    end
    
        alias :empty? :empty_file?
    
        # Returns the timestamp as defined by the <attachment>_updated_at field
    # in the server default time zone unless :use_global_time_zone is set
    # to false.  Note that a Rails.config.time_zone change will still
    # invalidate any path or URL that uses :timestamp.  For a
    # time_zone-agnostic timestamp, use #updated_at.
    def timestamp attachment, style_name
      attachment.instance_read(:updated_at).in_time_zone(attachment.time_zone).to_s
    end
    
        Hash.new.tap do |missing_styles|
      current_styles.each do |klass, attachment_definitions|
        attachment_definitions.each do |attachment_name, styles|
          registered = registered_styles[klass][attachment_name] || [] rescue []
          missed = styles - registered
          if missed.present?
            klass_sym = klass.to_s.to_sym
            missing_styles[klass_sym] ||= Hash.new
            missing_styles[klass_sym][attachment_name.to_sym] ||= Array.new
            missing_styles[klass_sym][attachment_name.to_sym].concat(missed.to_a)
            missing_styles[klass_sym][attachment_name.to_sym].map!(&:to_s).sort!.map!(&:to_sym).uniq!
          end
        end
      end
    end
  end
end
