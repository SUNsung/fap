  def show
    render json: @poll, serializer: REST::PollSerializer, include_results: true
  end
    
      def reject_follow!(follow)
    follow.destroy
    
    class ReportService < BaseService
  include Payloadable
    
          expect(response).to redirect_to(settings_preferences_notifications_path)
      user.reload
      expect(user.settings['notification_emails']['follow']).to be true
      expect(user.settings['interactions']['must_be_follower']).to be false
    end
  end
end

    
          if resource.blank?
        resource = new(email: attributes[:mail].first, agreement: true, account_attributes: { username: attributes[Devise.ldap_uid.to_sym].first })
        resource.ldap_setup(attributes)
      end
    
        before do
      subject.perform
    end
    
      let(:payload) do
    {
      '@context': 'https://www.w3.org/ns/activitystreams',
      id: 'foo',
      type: 'Create',
      actor: ActivityPub::TagManager.instance.uri_for(actor),
      object: {
        id: 'bar',
        type: 'Note',
        content: 'Lorem ipsum',
      },
    }
  end
    
    var pressure = new Array(400);
var bufs = new Array(10000);
    
        if sysinfo['Architecture'] == ARCH_X64 && target.arch.first == ARCH_X86
      fail_with(Failure::NoTarget, 'Session host is x64, but the target is specified as x86')
    elsif sysinfo['Architecture'] == ARCH_X86 && target.arch.first == ARCH_X64
      fail_with(Failure::NoTarget, 'Session host is x86, but the target is specified as x64')
    end
    
        credential_data = {
      module_fullname: fullname,
      post_reference_name: self.refname,
      session_id: session_db_id,
      origin_type: :session,
      private_data: opts[:password],
      private_type: :password,
      username: opts[:user]
    }.merge(service_data)
    
        block.call(data_service) if !data_service.nil? && self.active
  end
    
    # The framework-core depends on Rex
require 'rex'
require 'rex/ui'
require 'rex/arch'
include Rex::Arch
    
    TLV_TYPE_REGISTER_NAME      = TLV_META_TYPE_STRING  | 2540
TLV_TYPE_REGISTER_SIZE      = TLV_META_TYPE_UINT    | 2541
TLV_TYPE_REGISTER_VALUE_32  = TLV_META_TYPE_UINT    | 2542
TLV_TYPE_REGISTER           = TLV_META_TYPE_GROUP   | 2550
    
      def test_log
    assert_in_delta (0.8047189562170503+1.1071487177940904i), CMath.log(1+2i)
    assert_in_delta (0.7324867603589635+1.0077701926457874i), CMath.log(1+2i,3)
    assert_in_delta Math::PI*1i                             , CMath.log(-1)
    assert_in_delta 3.0                                     , CMath.log(8, 2)
    assert_in_delta (1.092840647090816-0.42078724841586035i), CMath.log(-8, -2)
  end
    
    describe 'GzipReader#getc' do
    
        quarantine! do # https://bugs.ruby-lang.org/issues/13675
      describe 'with nil' do
        it 'does not append anything to the stream' do
          @gz.ungetc nil
          @gz.read.should == ''
        end
    
        # skip gzip header for now
    @io.string.unpack('C*')[10..-1].should == @zip.unpack('C*')[10..-1]
  end
    
    class SessionsController < Devise::SessionsController
  # rubocop:disable Rails/LexicallyScopedActionFilter
  before_action :authenticate_with_2fa, only: :create
  after_action :reset_authentication_token, only: :create
  before_action :reset_authentication_token, only: :destroy
  # rubocop:enable Rails/LexicallyScopedActionFilter
    
      def user_search
    if params[:admins_controller_user_search]
      search_params = params.require(:admins_controller_user_search)
                            .permit(:username, :email, :guid, :under13)
      @search = UserSearch.new(search_params)
      @users = @search.perform
    end
    
        if @aspect.save
      result = {id: @aspect.id, name: @aspect.name}
      if aspecting_person_id.present?
        aspect_membership = connect_person_to_aspect(aspecting_person_id)
        result[:aspect_membership] = AspectMembershipPresenter.new(aspect_membership).base_hash if aspect_membership
      end
    
        opts = params.require(:message).permit(:text)
    message = current_user.build_message(conversation, opts)
    
          def secure_compare(a, b)
        Rack::Utils.secure_compare(a.to_s, b.to_s)
      end
    
        it 'Returns nil when Referer header is invalid' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => 'http://bar.com/bad|uri'}
      expect(subject.referrer(env)).to be_nil
    end
  end
end

    
    ::Bundler.with_friendly_errors do
  ::Bundler::CLI.start(ARGV, :debug => true)
end

    
    if $0 == __FILE__
  begin
    LogStash::PluginManager::Main.run('bin/logstash-plugin', ARGV)
  rescue LogStash::PluginManager::Error => e
    $stderr.puts(e.message)
    exit(1)
  end
end

    
      it 'returns the sorted config parts' do
    expect(subject.config_parts).to eq(ordered_config_parts)
  end
    
        desc 'Run one single machine acceptance test'
    task :single, :machine do |t, args|
      ENV['LS_VAGRANT_HOST']  = args[:machine]
      exit(RSpec::Core::Runner.run([Rake::FileList['acceptance/spec/lib/**/**/*_spec.rb']]))
    end
  end
end

    
      after(:each) do
    logstash.uninstall
  end
    
        context 'without a specific plugin' do
      it 'display a list of plugins' do
        result = logstash.run_command_in_path('bin/logstash-plugin list')
        expect(result.stdout.split('\n').size).to be > 1
      end
    
    module RuboCop
  # A help class for ConfigLoader that handles configuration resolution.
  class ConfigLoaderResolver
    def resolve_requires(path, hash)
      config_dir = File.dirname(path)
      Array(hash.delete('require')).each do |r|
        if r.start_with?('.')
          require(File.join(config_dir, r))
        else
          require(r)
        end
      end
    end
    
    module RuboCop
  module Cop
    # Monkey-patch Cop for tests to provide easy access to messages and
    # highlights.
    class Cop
      def messages
        offenses.sort.map(&:message)
      end
    
        header = ['Name', 'Default value', 'Configurable values']
    configs = pars
              .each_key
              .reject { |key| key.start_with?('Supported') }
              .reject { |key| key.start_with?('AllowMultipleStyles') }
    content = configs.map do |name|
      configurable = configurable_values(pars, name)
      default = format_table_value(pars[name])
      [name, default, configurable]
    end
    
            def autocorrect(range)
          PunctuationCorrector.swap_comma(range)
        end
    
      %w[module class].each do |keyword|
    it_behaves_like('at the top of the body', keyword)
    it_behaves_like('non-repeated visibility modifiers', keyword)
    it_behaves_like('unused visibility modifiers', keyword)
    
            puts foo
      RUBY
    end
  end
    
          def on_node(syms, sexp, excludes = [], &block)
        return to_enum(:on_node, syms, sexp, excludes) unless block_given?
    
          # This is used for duck typing with `pair` nodes which also appear as
      # `hash` elements.
      #
      # @return [false]
      def hash_rocket?
        false
      end
    
          deliver_order_confirmation_email unless confirmation_delivered?
    
        alias [] get_preference
    alias []= set_preference
    
        private
    
            def show
          @inventory_unit = inventory_unit
          respond_with(@inventory_unit)
        end
    
            def update
          @option_value = scope.accessible_by(current_ability, :update).find(params[:id])
          if @option_value.update(option_value_params)
            render :show
          else
            invalid_resource!(@option_value)
          end
        end