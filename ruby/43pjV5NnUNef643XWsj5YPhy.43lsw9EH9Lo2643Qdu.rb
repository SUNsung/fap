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
    
      def self.send_to_buffer(text, buffer_profile_id_code)
    client = Buffer::Client.new(ApplicationConfig['BUFFER_ACCESS_TOKEN'])
    client.create_update(
      body: {
        text:
        text,
        profile_ids: [
          buffer_profile_id_code,
        ]
      },
    )
  end
    
    Gem::Specification.new do |s|
  s.name          = 'tmuxinator'
  s.version       = Tmuxinator::VERSION
  s.authors       = ['Allen Bargi', 'Christopher Chow']
  s.email         = ['allen.bargi@gmail.com', 'chris@chowie.net']
  s.description   = %q{Create and manage complex tmux sessions easily.}
  s.summary       = %q{Create and manage complex tmux sessions easily.}
  s.homepage      = 'https://github.com/tmuxinator/tmuxinator'
  s.license       = 'MIT'
    
        def post?
      yaml['post']
    end
    
      describe '#tmux' do
    it { expect(instance.tmux).to eq 'wemux' }
  end
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
    
    RSpec.configure do |config|
  config.order = 'random'
end
    
        before do
      allow(Tmuxinator::Config).to receive(:default_path_option) { path_option }
    end