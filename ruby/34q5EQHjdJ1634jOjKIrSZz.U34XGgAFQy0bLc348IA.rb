
        
              inspector = GhInspector::Inspector.new('fastlane', 'fastlane', verbose: FastlaneCore::Globals.verbose?)
      delegate = Fastlane::InspectorReporter.new
      if message_or_error.kind_of?(String)
        inspector.search_query(message_or_error, delegate)
      else
        inspector.search_exception(message_or_error, delegate)
      end
    rescue => ex
      FastlaneCore::UI.error('Error finding relevant GitHub issues: #{ex}') if FastlaneCore::Globals.verbose?
    end
  end
end

    
            context 'with given path to oclint' do
          let(:result) do
            Fastlane::FastFile.new.parse('lane :test do
              oclint(
                compile_commands: './fastlane/spec/fixtures/oclint/compile_commands.json',
                oclint_path: 'test/bin/oclint'
              )
            end').runner.execute(:test)
          end
          let(:command) { 'cd #{File.expand_path('.').shellescape} && test/bin/oclint -report-type=html -o=oclint_report.html' }
    
          it 'yields any error result' do
        expect_command('ls', '-la', exitstatus: 1)
        Fastlane::Actions.sh('ls', '-la') do |status, result|
          expect(status.exitstatus).to eq(1)
          expect(result).to be_empty
        end
      end
    
        # [String] the name of the environment variable, which is only used if no other values were found
    attr_accessor :env_name
    
            FastlaneCore::CertChecker.installed_identies
      end
    
        os = 'other'
    shellescape_testcases.each do |testcase|
      it testcase['it'] + ': ' + testcase['it_result'][os] do
        str = testcase['str'].to_s
        expect_correct_implementation_to_be_called(str, :shellescape, os)
        escaped = str.shellescape
        expect(escaped).to eq(testcase['expect'][os])
      end
    end
  end
end
    
          it 'renders HTML' do
        capture = render(options, screenshots)
        expect(capture).to match(/<html>/)
        expect(capture).to include('<li>Some</li>')
        expect(capture).to include('<li>key</li>')
        expect(capture).to include('<li>words</li>')
      end
    end
    
            MergeRequest
          .where(id: start_id..stop_id)
          .where(latest_merge_request_diff_id: nil)
          .each_batch(of: BATCH_SIZE) do |relation|
    
            def preload_stages_warnings
          # This preloads the number of warnings for every stage, ensuring
          # that Ci::Stage#has_warnings? doesn't execute any additional
          # queries.
          @pipeline.stages.each { |stage| stage.number_of_warnings }
        end
      end
    end
  end
end

    
          def custom_api_endpoint
        github_omniauth_provider.dig('args', 'client_options', 'site')
      end
    
            def representation_class
          Representation::DiffNote
        end
    
    module Gitlab
  module GithubImport
    module Importer
      class IssuesImporter
        include ParallelScheduling
    
            def collection_method
          :lfs_objects
        end
    
            def importer_class
          NoteImporter
        end
    
            val.to_i if val.present?
      end
    
            '#{route.request_method} #{route.path}' if route
      end
    end
  end
end

    
      # Helper for use after calling send_*_instructions methods on a resource.
  # If we are in paranoid mode, we always act as if the resource was valid
  # and instructions were sent.
  def successfully_sent?(resource)
    notice = if Devise.paranoid
      resource.errors.clear
      :send_paranoid_instructions
    elsif resource.errors.empty?
      :send_instructions
    end
    
    module Devise
  module Controllers
    # A module that may be optionally included in a controller in order
    # to provide remember me behavior. Useful when signing in is done
    # through a callback, like in OmniAuth.
    module Rememberable
      # Return default cookie values retrieved from session options.
      def self.cookie_values
        Rails.configuration.session_options.slice(:path, :domain, :secure)
      end
    
          def self.generate_helpers!(routes=nil)
        routes ||= begin
          mappings = Devise.mappings.values.map(&:used_helpers).flatten.uniq
          Devise::URL_HELPERS.slice(*mappings)
        end
    
          def headers_for(action, opts)
        headers = {
          subject: subject_for(action),
          to: resource.email,
          from: mailer_sender(devise_mapping),
          reply_to: mailer_reply_to(devise_mapping),
          template_path: template_paths,
          template_name: action
        }.merge(opts)
    
        def default_controllers(options)
      mod = options[:module] || 'devise'
      @controllers = Hash.new { |h,k| h[k] = '#{mod}/#{k}' }
      @controllers.merge!(options[:controllers]) if options[:controllers]
      @controllers.each { |k,v| @controllers[k] = v.to_s }
    end
    
        # Creates configuration values for Devise and for the given module.
    #
    #   Devise::Models.config(Devise::Models::DatabaseAuthenticatable, :stretches)
    #
    # The line above creates:
    #
    #   1) An accessor called Devise.stretches, which value is used by default;
    #
    #   2) Some class methods for your model Model.stretches and Model.stretches=
    #      which have higher priority than Devise.stretches;
    #
    #   3) And an instance method stretches.
    #
    # To add the class methods you need to have a module ClassMethods defined
    # inside the given class.
    #
    def self.config(mod, *accessors) #:nodoc:
      class << mod; attr_accessor :available_configs; end
      mod.available_configs = accessors
    
    require 'devise/hooks/timeoutable'
    
        def initialize(*args)
      @s = StringScanner.new(*args)
    end
    
        def log_file_info(s)
      puts '    #{magenta s}'
    end
    
      # Specifies the header that your server uses for sending files.
  # config.action_dispatch.x_sendfile_header = 'X-Sendfile' # for apache
  # config.action_dispatch.x_sendfile_header = 'X-Accel-Redirect' # for nginx
    
      # Disable request forgery protection in test environment.
  config.action_controller.allow_forgery_protection = false
    
      def test_image_helper
    assert_match %r(url\(['']?/assets/apple-touch-icon-144-precomposed.*png['']?\)), @css
  end
    
        xss_links = %w(
      //evil.com/?jsfiddle.net
      https://jsfiddle.net.evil.com
      https://jsfiddle.net/some_username/pen/' onload='alert('xss')'
    )
    
      private
    
    RSpec.describe 'CommentMutes', type: :request do
  let(:original_commenter)                      { create(:user) }
  let(:other_commenter)                         { create(:user) }
  let(:article)                                 { create(:article) }
  let(:parent_comment_by_og)                    { create(:comment, commentable: article, user: original_commenter) }
  let(:child_of_parent_by_other)              { create(:comment, commentable: article, user: other_commenter, ancestry: parent_comment_by_og.id.to_s) }
  let(:child_of_child_by_og)                { create(:comment, commentable: article, user: original_commenter, ancestry: '#{parent_comment_by_og.id}/#{child_of_parent_by_other.id}') }
  let(:child_of_child_of_child_by_other)  { create(:comment, commentable: article, user: other_commenter, ancestry: '#{parent_comment_by_og.id}/#{child_of_parent_by_other.id}/#{child_of_child_by_og.id}') }
  let(:child_of_child_of_child_by_og)     { create(:comment, commentable: article, user: original_commenter, ancestry: '#{parent_comment_by_og.id}/#{child_of_parent_by_other.id}/#{child_of_child_by_og.id}/#{child_of_child_by_other.id}') }
  let(:child_of_child_by_other)             { create(:comment, commentable: article, user: other_commenter, ancestry: '#{parent_comment_by_og.id}/#{child_of_parent_by_other.id}') }
  let(:child2_of_child_of_child_by_og) { create(:comment, commentable: article, user: original_commenter, ancestry: '#{parent_comment_by_og.id}/#{child_of_parent_by_other.id}/#{child_of_child_by_other.id}') }
  let(:parent_comment_by_other) { create(:comment, commentable: article, user: other_commenter) }