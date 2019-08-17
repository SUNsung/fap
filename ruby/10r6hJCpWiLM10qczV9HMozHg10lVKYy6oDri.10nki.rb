
        
            def get_path_for_upload(upload)
      extension =
        if upload.extension
          '.#{upload.extension}'
        else
          # Maintain backward compatibility before Jobs::MigrateUploadExtensions runs
          File.extname(upload.original_filename)
        end
    
          SiteSetting.enable_s3_uploads = true
      SiteSetting.s3_upload_bucket = 's3-upload-bucket'
      SiteSetting.s3_access_key_id = 'some key'
      SiteSetting.s3_secret_access_key = 'some secret key'
    
          # there might be more information available in the exception
      if message_template == :email_reject_invalid_post && e.message.size > 6
        message_template = :email_reject_invalid_post_specified
        template_args[:post_error] = e.message
      end
    
      context 'plugins' do
    before do
      DiscoursePluginRegistry.register_locale(
        'foo',
        name: 'Foo',
        nativeName: 'Foo Bar',
        plural: {
          keys: [:one, :few, :other],
          rule: lambda do |n|
            return :one if n == 1
            return :few if n < 10
            :other
          end
        }
      )
    
        Category.where(id: @topic.category_id).update_all(latest_post_id: @post.id)
    Category.where(id: @topic.category_id).update_all(latest_topic_id: @topic.id) if @post.is_first_post?
  end
    
      def construct_url_with(action, opts)
    method = url_method(opts)
    
        context 'tagging' do
      context 'tagging disabled' do
        before do
          SiteSetting.tagging_enabled = false
        end
    
        it 'can produce confusing results when using site_setting_saved' do
      # site_setting_saved is deprecated. This test case illustrates why it can be confusing
    
          def remember_me_is_active?(resource)
        return false unless resource.respond_to?(:remember_me)
        scope = Devise::Mapping.find_scope!(resource)
        _, token, generated_at = cookies.signed[remember_key(resource, scope)]
        resource.remember_me?(token, generated_at)
      end
    
    module Devise
  module Controllers
    # Create url helpers to be used with resource/scope configuration. Acts as
    # proxies to the generated routes created by devise.
    # Resource param can be a string or symbol, a class, or an instance object.
    # Example using a :user resource:
    #
    #   new_session_path(:user)      => new_user_session_path
    #   session_path(:user)          => user_session_path
    #   destroy_session_path(:user)  => destroy_user_session_path
    #
    #   new_password_path(:user)     => new_user_password_path
    #   password_path(:user)         => user_password_path
    #   edit_password_path(:user)    => edit_user_password_path
    #
    #   new_confirmation_path(:user) => new_user_confirmation_path
    #   confirmation_path(:user)     => user_confirmation_path
    #
    # Those helpers are included by default to ActionController::Base.
    #
    # In case you want to add such helpers to another class, you can do
    # that as long as this new class includes both url_helpers and
    # mounted_helpers. Example:
    #
    #     include Rails.application.routes.url_helpers
    #     include Rails.application.routes.mounted_helpers
    #
    module UrlHelpers
      def self.remove_helpers!
        self.instance_methods.map(&:to_s).grep(/_(url|path)$/).each do |method|
          remove_method method
        end
      end
    
    module Devise
  module Mailers
    module Helpers
      extend ActiveSupport::Concern
    
        private
    
    require 'devise/models/authenticatable'

    
            if Devise.activerecord51?
          def clear_reset_password_token?
            encrypted_password_changed = respond_to?(:will_save_change_to_encrypted_password?) && will_save_change_to_encrypted_password?
            authentication_keys_changed = self.class.authentication_keys.any? do |attribute|
              respond_to?('will_save_change_to_#{attribute}?') && send('will_save_change_to_#{attribute}?')
            end
    
          module ClassMethods
        Devise::Models.config(self, :timeout_in)
      end
    end
  end
end

    
    ###
#
# This module implements the Bind TCP handler.  This means that
# it will attempt to connect to a remote host on a given port for a period of
# time (typically the duration of an exploit) to see if a the payload has
# started listening.  This can tend to be rather verbose in terms of traffic
# and in general it is preferable to use reverse payloads.
#
###
module BindUdp
    
        # Extract each header value pair
    header.split(/\r\n/mn).each { |str|
      if (md = str.match(/^(.+?)\s*:\s*(.+?)\s*$/))
        if (self[md[1]])
          self[md[1]] << ', ' + md[2]
        else
          self[md[1]] = md[2]
        end
      end
    }
  end
    
              # Encodes the realm field
          #
          # @return [String]
          def encode_realm
            encoded = ''
            encoded << [realm.length].pack('N')
            encoded << realm
    
                k3 = OpenSSL::HMAC.digest('MD5', k1, checksum)
    
                int
          end
    
            # Cleans up projects before writing.
        #
        def cleanup_projects(projects)
          projects.each do |project|
            [project.pods, project.support_files_group,
             project.development_pods, project.dependencies_group].each { |group| group.remove_from_project if group.empty? }
            project.sort(:groups_position => :below)
          end
        end
      end
    end
  end
end

    
          def spec_sets
        @spec_sets ||= begin
          analyzer.send(:update_repositories) if repo_update?(:default => true)
          aggregate = Source::Aggregate.new(analyzer.sources)
          installed_pods.map do |pod_name|
            aggregate.search(Dependency.new(pod_name))
          end.compact.uniq
        end
      end
    
      # Indicates an user error. This is defined in cocoapods-core.
  #
  class Informative < PlainInformative
    def message
      '[!] #{super}'.red
    end
  end
    
          describe 'concerning other_ld_flags' do
        it 'other_ld_flags should not include -ObjC when there are not static frameworks' do
          target_definition = fixture_target_definition(:contents => { 'inheritance' => 'complete' })
          spec = stub('spec', :library_specification? => false, :spec_type => :test)
          consumer = stub('consumer',
                          :libraries => ['xml2'],
                          :frameworks => ['XCTest'],
                          :weak_frameworks => [],
                          :spec => spec,
                         )
          file_accessor = stub('file_accessor',
                               :spec => spec,
                               :spec_consumer => consumer,
                               :vendored_static_artifacts => [],
                              )
          pod_target = stub('pod_target',
                            :file_accessors => [file_accessor],
                            :requires_frameworks? => true,
                            :dependent_targets => [],
                            :recursive_dependent_targets => [],
                            :sandbox => config.sandbox,
                            :include_in_build_config? => true,
                            :should_build? => false,
                            :spec_consumers => [consumer],
                            :build_as_static? => false,
                            :product_basename => 'PodTarget',
                            :target_definitions => [target_definition],
                           )
          pod_target.stubs(:build_settings => pod(pod_target))
          aggregate_target = fixture_aggregate_target([pod_target], true)
          aggregate(aggregate_target).other_ldflags.should.not.include '-ObjC'
        end
    
      spec.source_files  = 'Classes', 'Classes/**/*.{h,m}'
  spec.exclude_files = 'Classes/Exclude'
    
      describe '#body' do
    context 'with a single expression body' do
      let(:source) do
        'class << self; bar; end'
      end
    
    module RuboCop
  module Cop
    # Common functionality for checking assignment nodes.
    module CheckAssignment
      def on_lvasgn(node)
        check_assignment(node, extract_rhs(node))
      end
      alias on_ivasgn   on_lvasgn
      alias on_cvasgn   on_lvasgn
      alias on_gvasgn   on_lvasgn
      alias on_casgn    on_lvasgn
      alias on_masgn    on_lvasgn
      alias on_op_asgn  on_lvasgn
      alias on_or_asgn  on_lvasgn
      alias on_and_asgn on_lvasgn
    
          it { expect(if_node.nested_conditional?).to be_truthy }
    end
    
          # Returns the body of the `for` loop.
      #
      # @return [Node, nil] The body of the `for` loop.
      def body
        node_parts[2]
      end
    end
  end
end

    
          @right_diff_line_number = nil
    
          def versions
        i = @versions.size + 1
        @versions.map do |v|
          i -= 1
          { :id        => v.id,
            :id7       => v.id[0..6],
            :num       => i,
            :selected  => @page.version.id == v.id,
            :author    => v.author.name.respond_to?(:force_encoding) ? v.author.name.force_encoding('UTF-8') : v.author.name,
            :message   => v.message.respond_to?(:force_encoding) ? v.message.force_encoding('UTF-8') : v.message,
            :date      => v.authored_date.strftime('%B %d, %Y'),
            :gravatar  => Digest::MD5.hexdigest(v.author.email.strip.downcase),
            :identicon => self._identicon_code(v.author.email),
            :date_full => v.authored_date,
          }
        end
      end
    
    #############################################################################
#
# Standard tasks
#
#############################################################################
    
        # Extract the path string that Gollum::Wiki expects
    def extract_path(file_path)
      return nil if file_path.nil?
      last_slash = file_path.rindex('/')
      if last_slash
        file_path[0, last_slash]
      end
    end
    
        it 'returns nil if an except is provided' do
      valid_article = create(:article, tags: 'explainlikeimfive')
      expect(described_class.new(valid_article, 'explainlikeimfive').tag).to eq(nil)
    end
    
        it 'denies chat channel invitation to non-authorized user' do
      expect do
        post '/chat_channel_memberships', params: {
          chat_channel_membership: {
            user_id: second_user.id, chat_channel_id: chat_channel.id
          }
        }
      end.to raise_error(Pundit::NotAuthorizedError)
    end
  end
    
      it 'renders a user's story successfully' do
    expect(get: '/ben/this-is-a-slug').to route_to(
      controller: 'stories',
      action: 'show',
      slug: 'this-is-a-slug',
      username: 'ben',
    )
  end
    
          it('renders empty body') { expect(response.body).to be_empty }
    end
  end
    
    def capture_logging(lvl=Logger::INFO)
  old = Sidekiq.logger
  begin
    out = StringIO.new
    logger = Logger.new(out)
    logger.level = lvl
    Sidekiq.logger = logger
    yield
    out.string
  ensure
    Sidekiq.logger = old
  end
end
    
      it 'does not support invalid concurrency' do
    assert_raises(ArgumentError) { new_manager(concurrency: 0) }
    assert_raises(ArgumentError) { new_manager(concurrency: -1) }
  end
    
      it 'correctly replaces middleware when using middleware with options in the initializer' do
    chain = Sidekiq::Middleware::Chain.new
    chain.add NonYieldingMiddleware
    chain.add NonYieldingMiddleware, {:foo => 5}
    assert_equal 1, chain.count
  end
    
      describe 'error handling' do
    it 'deals with user-specified error handlers which raise errors' do
      output = capture_logging do
        begin
          Sidekiq.error_handlers << proc {|x, hash|
            raise 'boom'
          }
          cli = Sidekiq::CLI.new
          cli.handle_exception(RuntimeError.new('hello'))
        ensure
          Sidekiq.error_handlers.pop
        end
      end
      assert_includes output, 'boom'
      assert_includes output, 'ERROR'
    end
  end
    
          begin
        Sidekiq::Testing.fake! do
          AttributeWorker.perform_async
          assert_equal 0, AttributeWorker.count
        end
    
      describe 'delay' do
    require 'action_mailer'
    class InlineFooMailer < ActionMailer::Base
      def bar(str)
        raise InlineError
      end
    end