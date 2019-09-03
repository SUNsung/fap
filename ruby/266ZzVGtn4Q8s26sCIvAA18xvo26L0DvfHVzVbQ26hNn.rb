
        
        version = ['', 'ext/etc/'].find do |dir|
  begin
    break File.open(File.expand_path('../#{dir}/etc.c', __FILE__)) do |f|
      f.gets '\n#define RUBY_ETC_VERSION '
      f.gets[/'(.+)'/, 1]
    end
  rescue
    next
  end
end
    
          def test_on_event_hash_return4
        ev = WIN32OLE_EVENT.new(@db)
        ev.on_event('WillConnect'){|*args|
          {'return' => 1, 'ConnectionString' => CONNSTR}
        }
        @db.connectionString = 'XXX'
        @db.open
        assert(true)
      end
    
        ScratchPad.record []
    while true
      begin
        ScratchPad << enum.next
      rescue StopIteration
        break
      end
    end
    
      it 'returns true when at EOF' do
    gz = Zlib::GzipReader.new @io
    gz.eof?.should be_false
    gz.read
    gz.eof?.should be_true
  end
    
        describe 'with an integer' do
      it 'prepends the byte to the stream' do
        @gz.ungetbyte 0x21
        @gz.read.should == '!12345abcde'
      end
    
          respond_with do |format|
        format.html { redirect_to admin_pods_path }
        format.json { render json: PodPresenter.new(pod).as_json }
      end
    end
  end
end

    
      def show
    if @aspect = current_user.aspects.where(:id => params[:id]).first
      redirect_to aspects_path('a_ids[]' => @aspect.id)
    else
      redirect_to aspects_path
    end
  end
    
      respond_to :html, :mobile, :json
    
    World(RemoteCommandHelpers)

    
        [stdout, stderr, status]
  end
    
          # rubocop:disable Style/GuardClause
      def register_legacy_scm_hooks
        if Rake::Task.task_defined?('deploy:new_release_path')
          after 'deploy:new_release_path', '#{scm_name}:create_release'
        end
    
    module Capistrano
  class Configuration
    class Servers
      include Enumerable
    
          # Given a callable that provides a value, wrap the callable with another
      # object that responds to `call`. This new object will perform validation
      # and then return the original callable's value.
      #
      # If the callable is a `Question`, the object returned by this method will
      # also be a `Question` (a `ValidatedQuestion`, to be precise). This
      # ensures that `is_a?(Question)` remains true even after the validation
      # wrapper is applied. This is needed so that `Configuration#is_question?`
      # works as expected.
      #
      def assert_valid_later(key, callable)
        validation_callback = lambda do
          value = callable.call
          assert_valid_now(key, value)
          value
        end
    
    set_if_empty :local_user, -> { ENV['USER'] || ENV['LOGNAME'] || ENV['USERNAME'] }

    
          it 'does not create the ApiSecret' do
        expect { post '/users/api_secrets', params: { api_secret: invalid_params } }.
          not_to(change { user.api_secrets.count })
      end
    
      describe 'DELETE blocks' do
    it 'updates block from input data' do
      block = create(:block, user_id: user.id, input_css: '.blue { color: blue;}')
      delete '/blocks/#{block.id}'
      expect(Block.all.size).to eq(0)
    end
  end
end

    
      it 'renders a podcast index if there is a podcast with the slug successfully' do
    expect(get: '/#{podcast.slug}').to route_to(
      controller: 'stories',
      action: 'index',
      username: podcast.slug,
    )
  end
    
      def permitted_attributes
    %i[title body_html body_markdown main_image published canonical_url
       description allow_small_edits allow_big_edits tag_list publish_under_org
       video video_code video_source_url video_thumbnail_url receive_notifications
       archived]
  end
    
        def tmux_pre_command
      _send_target(tab.pre.shellescape) if tab.pre
    end
    
    describe Tmuxinator::Pane do
  let(:klass) { described_class }
  let(:instance) { klass.new(index, project, window, *commands) }
  # let(:index) { 'vim' }
  # let(:project) { 0 }
  # let(:tab) { nil }
  # let(:commands) { nil }
  let(:index) { 0 }
  let(:project) { double }
  let(:window) { double }
  let(:commands) { ['vim', 'bash'] }
    
        context 'with deprecations' do
      context 'rbenv option is present' do
        before do
          allow(project).to receive_messages(rbenv?: true)
          allow(project).to \
            receive_message_chain(:yaml, :[]).and_return('2.0.0-p247')
        end
    
        msg = 'Actual pane does not match expected'
    msg << '\n  Expected #{@commands} but has #{actual.commands}' if @commands
    msg << '\n  Expected pane to have #{@expected_attrs}' if @expected_attrs
  end
    
            it 'creates a new tmuxinator project file' do
          capture_io { cli.start }
          expect(file.string).to_not be_empty
        end
      end
    
          def version
        if Tmuxinator::Doctor.installed?
          tmux_version = `tmux -V`.split(' ')[1]
    
          it 'is empty if no configuration directories exist' do
        allow(File).to receive(:directory?).and_return false
        expect(described_class.directories).to eq []
      end
    
          it { is_expected.to be false }
    end