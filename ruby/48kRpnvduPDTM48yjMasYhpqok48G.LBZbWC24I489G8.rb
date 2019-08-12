
        
                  it 'registers an offense' do
            inspect_source(source)
            expect(cop.offenses.size).to eq(1)
            expect(cop.messages).to eq(['Use `Integer` instead of `#{klass}`.'])
          end
    
        it 'returns a hash with the flare tag's name' do
      expect(described_class.new(valid_article).tag_hash.value?('ama')).to be true
    end
    
      def listings_tweet!
    buffer_listings_id = ApplicationConfig['BUFFER_LISTINGS_PROFILE']
    BufferUpdate.send_to_buffer(listings_twitter_text, buffer_listings_id)
    @listing.update(last_buffered: Time.current)
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
    
      factory :project_with_literals_as_window_name, class: Tmuxinator::Project do
    transient do
      file { yaml_load('spec/fixtures/sample_literals_as_window_name.yml') }
    end
    
    describe Tmuxinator::Hooks::Project do
  let(:project) { FactoryBot.build(:project) }
    
      it { expect(subject.tmux_window_and_pane_target).to eql 'foo:0.1' }
end

    
      describe '#get_pane_base_index' do
    it 'extracts pane-base-index from the global tmux window options' do
      allow_any_instance_of(Kernel).to receive(:`).
        with(Regexp.new('tmux.+ show-window-option -g pane-base-index')).
        and_return('pane-base-index 3\n')
    
      chain :with_commands do |*expected|
    @commands = expected
  end
  alias_method :and_commands, :with_commands
    
        def deprecation_messages
      [
        RBENVRVM_DEP_MSG,
        TABS_DEP_MSG,
        CLIARGS_DEP_MSG,
        SYNC_DEP_MSG,
        PRE_DEP_MSG,
        POST_DEP_MSG
      ]
    end
    
          expect(instance.render).to match %r{wemux.ls.2>\/dev\/null}
    end
  end
    
    describe Tmuxinator::Doctor do
  describe '.installed?' do
    context 'tmux is installed' do
      before do
        allow(Kernel).to receive(:system) { true }
      end
    
          it 'returns one pane in an Array' do
        expect(window.panes.first).to be_a_pane.
          with(index: 0).and_commands('vim')
      end
    end