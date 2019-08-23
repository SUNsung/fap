
        
            def test_migrations_can_handle_foreign_keys_to_specific_tables
      migration = RevertCustomForeignKeyTable.new
      InvertibleMigration.migrate(:up)
      migration.migrate(:up)
      migration.migrate(:down)
    end
    
      def test_validators
    assert_equal 1, Parrot.validators.size
    assert_equal 1, Company.validators.size
    assert_equal 1, Parrot.validators_on(:name).size
    assert_equal 1, Company.validators_on(:name).size
  end
    
          def password
        Rails.application.credentials.dig(:action_mailbox, :ingress_password) || ENV['RAILS_INBOUND_EMAIL_PASSWORD']
      end
  end
end

    
          setup :build_app
      teardown :teardown_app
    
        desc 'Get the text for a specific license' do
      detail 'This feature was introduced in GitLab 8.7.'
      success ::API::Entities::License
    end
    params do
      requires :name, type: String, desc: 'The name of the template'
    end
    get 'templates/licenses/:name', requirements: { name: /[\w\.-]+/ } do
      template = TemplateFinder.build(:licenses, nil, name: params[:name]).execute
    
      subject(:finder) { described_class.new(project, 'files/', '.html', categories) }
    
        def find(query)
      query = Gitlab::Search::Query.new(query, encode_binary: true) do
        filter :filename, matcher: ->(filter, blob) { blob.binary_filename =~ /#{filter[:regex_value]}$/i }
        filter :path, matcher: ->(filter, blob) { blob.binary_filename =~ /#{filter[:regex_value]}/i }
        filter :extension, matcher: ->(filter, blob) { blob.binary_filename =~ /\.#{filter[:regex_value]}$/i }
      end
    
          info do
        options.info_map.each_with_object({}) do |(k, v), h|
          h[k.to_s] = decoded[v.to_s]
        end
      end
    
        allow(subject).to receive(:diff_files) { [readme_file, other_file, nil_path_file] }
    expect(readme_file).to receive(:unfold_diff_lines).with(position)
    
        context 'if compliant?' do
      let(:compliant) { true }
    
          context '!limit_reached?' do
        let(:limit_reached) { false }
    
      def eligible_users
    User.emailable
        .where('current_sign_in_at < ?', (FREQUENCY + SIGN_IN_OFFSET).ago)
        .where('last_emailed_at IS NULL OR last_emailed_at < ?', FREQUENCY.ago)
  end
end

    
          context 'if the message chain initiated by recipient, but is not direct message' do
        let(:reply_to) { Fabricate(:status, account: recipient) }
        let(:activity) { Fabricate(:mention, account: recipient, status: Fabricate(:status, account: sender, visibility: :direct, thread: reply_to)) }
    
      # You can wrap each item in a collection of radio/check boxes with a tag,
  # defaulting to :span.
  # config.item_wrapper_tag = :span
    
    RSpec.describe 'Blocks', type: :request do
  let(:user) { create(:user, :super_admin) }
    
      describe 'DELETE /chat_channel_memberships/:id' do
    before do
      user.add_role(:super_admin)
      post '/chat_channel_memberships', params: {
        chat_channel_membership: { user_id: second_user.id, chat_channel_id: chat_channel.id }
      }
    end
    
        respond_to do |format|
      format.html do
        render 'user', layout: false
      end
      format.png do
        html = render_to_string('user', formats: :html, layout: false)
        redirect_to HtmlCssToImage.fetch_url(html: html, css: PNG_CSS, google_fonts: 'Roboto'), status: :found
      end
    end
  end
    
      def twitter_buffer_text
    '#{text} https://dev.to#{@article.path}' if text.size <= 255
  end
    
          def partial(name)
        if name == :author_template
          self.class.partial('history_authors/#{@wiki.user_icons}')
        else
          super
        end
      end
    
          def mathjax
        @mathjax
      end
    
    context 'Precious::Helpers' do
  include Precious::Helpers
    
    #############################################################################
#
# Helper functions
#
#############################################################################
    
      it 'should package Digest::MD5' do
    pending('Disabled on travis-ci because it always fails, and there is no way to debug it?') if is_travis
    
        context 'and :python_fix_dependencies? is true' do
      before :each do
        subject.attributes[:python_fix_dependencies?] = true
      end
    
      shared_examples_for :Mutator do |item|
    context 'when set' do
      let(:value) { 'whatever' }
      it 'should return the set value' do
        expect(subject.send('#{item}=', value)).to(be == value)
      end
    
    class FPM::Package::NPM < FPM::Package
  class << self
    include FPM::Util
  end
  # Flags '--foo' will be accessable  as attributes[:npm_foo]
  option '--bin', 'NPM_EXECUTABLE',
    'The path to the npm executable you wish to run.', :default => 'npm'
    
      POSTINSTALL_ACTIONS = [ 'logout', 'restart', 'shutdown' ]
  OWNERSHIP_OPTIONS = ['recommended', 'preserve', 'preserve-other']
    
        if File.directory?(path_to_package)
      setup_py = File.join(path_to_package, 'setup.py')
    else
      setup_py = path_to_package
    end
    
        args = [ tar_cmd,
             '-C',
             staging_path,
             '-cf',
             payload_tar,
             '--owner=0',
             '--group=0',
             '--numeric-owner',
             '.' ]