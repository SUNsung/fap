
        
            def initialize(tag_name, markup, tokens)
      @videos = markup.scan(/((https?:\/\/|\/)\S+\.(webm|ogv|mp4)\S*)/i).map(&:first).compact
      @poster = markup.scan(/((https?:\/\/|\/)\S+\.(png|gif|jpe?g)\S*)/i).map(&:first).compact.first
      @sizes  = markup.scan(/\s(\d\S+)/i).map(&:first).compact
      super
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
    
        def list
      say 'tmuxinator projects:'
      if options[:newline]
        say Tmuxinator::Config.configs.join('\n')
      else
        print_in_columns Tmuxinator::Config.configs
      end
    end
    
        it 'checks requirements' do
      expect(Tmuxinator::Doctor).to receive(:installed?)
      expect(Tmuxinator::Doctor).to receive(:editor?)
      expect(Tmuxinator::Doctor).to receive(:shell?)
      capture_io { cli.start }
    end
  end
    
      factory :project_with_alias, class: Tmuxinator::Project do
    transient do
      file { 'spec/fixtures/sample_alias.yml' }
    end
    
        it 'removes settings from args' do
      described_class.parse_settings(args)
      expect(args).to eq(['one'])
    end
  end
    
      if base_index = options.fetch(:base_index) { 1 }
    standard_options << 'base-index #{base_index}'
  end
    
      describe '#tmux' do
    it { expect(instance.tmux).to eq 'wemux' }
  end
end

    
          it 'returns true' do
        expect(described_class.installed?).to be_truthy
      end
    end