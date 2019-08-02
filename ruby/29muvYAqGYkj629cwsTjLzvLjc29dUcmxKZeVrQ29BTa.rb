
        
          def test_default_locale_template_is_used_when_locale_is_missing
    I18n.locale = :dk
    get :hello_world
    assert_equal 'Hello World', @response.body
  end
    
        should 'contain only the default collections' do
      expected = {}
      refute_equal expected, @site.collections
      refute_nil @site.collections
    end
  end
    
          # return nil for `{{ site.config }}` even if --config was passed via CLI
      def config; end
    end
  end
end

    
        context 'when a custom highlighter is chosen' do
      should 'use the chosen highlighter if it's available' do
        override = {
          'highlighter' => nil,
          'markdown'    => 'kramdown',
          'kramdown'    => {
            'syntax_highlighter' => :coderay,
          },
        }
    
    #############################################################################
#
# Standard tasks
#
#############################################################################
    
    # No trailing slash
Benchmark.ips do |x|
  path = '/some/very/very/long/path/to/a/file/i/like'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end
    
              theme.create!
          Jekyll.logger.info 'Your new Jekyll theme, #{theme.name.cyan},' \
                             ' is ready for you in #{theme.path.to_s.cyan}!'
          Jekyll.logger.info 'For help getting started, read #{theme.path}/README.md.'
        end
        # rubocop:enable Metrics/AbcSize
      end
    end
  end
end

    
          def self.category
        :misc
      end
    end
  end
end

    
        context 'when semantic version' do
      it 'returns the current version once parsed' do
        test_content = 'spec.version = '1.3.2''
        result = @version_podspec_file.parse(test_content)
        expect(result).to eq('1.3.2')
        expect(@version_podspec_file.version_value).to eq('1.3.2')
        expect(@version_podspec_file.version_match[:major]).to eq('1')
        expect(@version_podspec_file.version_match[:minor]).to eq('3')
        expect(@version_podspec_file.version_match[:patch]).to eq('2')
      end
    
    require 'fastlane_core/print_table'
require 'spaceship'
require 'spaceship/tunes/tunes'
require 'spaceship/tunes/members'
require 'spaceship/test_flight'
require 'fastlane_core/ipa_file_analyser'
require_relative 'module'
    
          def delete_from_beta_groups(beta_groups: nil)
        beta_group_ids = beta_groups.map(&:id)
        return Spaceship::ConnectAPI.delete_beta_tester_from_beta_groups(beta_tester_id: id, beta_group_ids: beta_group_ids)
      end
    end
  end
end

    
          attr_mapping({
        'installCount' => 'install_count',
        'crashCount' => 'crash_count',
        'sessionCount' => 'session_count',
        'betaTesterState' => 'beta_tester_state',
        'lastModifiedDate' => 'last_modified_date',
        'installedCfBundleShortVersionString' => 'installed_cf_bundle_short_version_string',
        'installedCfBundleVersion' => 'installed_cf_bundle_version'
      })
    
          module Status
        ENABLED = 'ENABLED'
        DISABLED = 'DISABLED'
      end
    
    DeviseCreateUsers.migrate(:up)
    
              path
        end
      end
    
        # Receives an object and find a scope for it. If a scope cannot be found,
    # raises an error. If a symbol is given, it's considered to be the scope.
    def self.find_scope!(obj)
      obj = obj.devise_scope if obj.respond_to?(:devise_scope)
      case obj
      when String, Symbol
        return obj.to_sym
      when Class
        Devise.mappings.each_value { |m| return m.name if obj <= m.to }
      else
        Devise.mappings.each_value { |m| return m.name if obj.is_a?(m.to) }
      end
    
            # Attempt to find a user by its reset_password_token to reset its
        # password. If a user is found and token is still valid, reset its password and automatically
        # try saving the record. If not user is found, returns a new user
        # containing an error in reset_password_token attribute.
        # Attributes must contain reset_password_token, password and confirmation
        def reset_password_by_token(attributes={})
          original_token       = attributes[:reset_password_token]
          reset_password_token = Devise.token_generator.digest(self, :reset_password_token, original_token)
    
          private
    
      # Configure parameters from the request object used for authentication. Each entry
  # given should be a request method and it will automatically be passed to the
  # find_for_authentication method and considered in your model lookup. For instance,
  # if you set :request_keys to [:subdomain], :subdomain will be used on authentication.
  # The same considerations mentioned for authentication_keys also apply to request_keys.
  # config.request_keys = []
    
    module Admin
  class PodsController < AdminController
    respond_to :html, :json, :mobile
    
          def to_boolean(str)
        str.downcase == 'true'
      end
    
      rescue_from ActiveRecord::RecordNotFound do
    render plain: I18n.t('aspect_memberships.destroy.no_membership'), status: 404
  end
    
      def create
    begin
      comment = comment_service.create(params[:post_id], params[:text])
    rescue ActiveRecord::RecordNotFound
      render plain: I18n.t('comments.create.error'), status: 404
      return
    end
    
      def update
    note = Notification.where(:recipient_id => current_user.id, :id => params[:id]).first
    if note
      note.set_read_state(params[:set_unread] != 'true' )
    
    module LogStash
  module PluginManager
  end
end
    
      describe '#hook_on_project_start' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_start' }
    end
  end
  describe '#hook_on_project_first_start' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_first_start' }
    end
  end
  describe '#hook_on_project_restart' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_restart' }
    end
  end
  describe '#hook_on_project_exit' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_exit' }
    end
  end
  describe '#hook_on_project_stop' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_stop' }
    end
  end
end

    
      def is_pane
    @actual.is_a? Tmuxinator::Pane
  end
end

    
        context 'environment variable $TMUXINATOR_CONFIG is nil' do
      it 'is an empty string' do
        allow(ENV).to receive(:[]).with('TMUXINATOR_CONFIG').
          and_return nil
        # allow(XDG).to receive(:[]).with('CONFIG').and_return nil
        allow(File).to receive(:directory?).and_return true
        expect(described_class.environment).to eq ''
      end
    end