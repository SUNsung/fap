    def self.can_extract?(path)
      mime_type = 'application/vnd.adobe.air-application-installer-package+zip'
      path.magic_number.match?(/.{59}#{Regexp.escape(mime_type)}/)
    end
    
      failure_message_for_should do |actual|
    'expected #{actual.inspect} to have path in #{expected.inspect} but was #{actual.current_path.inspect}'
  end
  failure_message_for_should_not do |actual|
    'expected #{actual.inspect} to not have path in #{expected.inspect} but it had'
  end
end
    
          get :index, params: {a_id: @aspect.id, page: '1'}, format: :json
      save_fixture(response.body, 'aspects_manage_contacts_json')
    end
    
        def initialize(tag_name, markup, tokens)
      @by = nil
      @source = nil
      @title = nil
      if markup =~ FullCiteWithTitle
        @by = $1
        @source = $2 + $3
        @title = $4.titlecase.strip
      elsif markup =~ FullCite
        @by = $1
        @source = $2 + $3
      elsif markup =~ AuthorTitle
        @by = $1
        @title = $2.titlecase.strip
      elsif markup =~ Author
        @by = $1
      end
      super
    end
    
    Liquid::Template.register_tag('img', Jekyll::ImageTag)

    
          super
    end
    
      class IncludeCodeTag < Liquid::Tag
    def initialize(tag_name, markup, tokens)
      @title = nil
      @file = nil
      if markup.strip =~ /\s*lang:(\S+)/i
        @filetype = $1
        markup = markup.strip.sub(/lang:\S+/i,'')
      end
      if markup.strip =~ /(.*)?(\s+|^)(\/*\S+)/i
        @title = $1 || nil
        @file = $3
      end
      super
    end
    
        it 'accepts jsfiddle link with a / at the end' do
      jsfiddle_link = 'http://jsfiddle.net/link2twenty/v2kx9jcd/'
      expect do
        generate_new_liquid(jsfiddle_link)
      end.not_to raise_error
    end
    
      def settings?
    edit?
  end
    
      def create
    @broadcast = Broadcast.new(broadcast_params)
    redirect_to '/internal/broadcasts'
  end
    
        def _send_target(e)
      _send_keys(tmux_window_and_pane_target, e)
    end
    
      factory :noroot_project, class: Tmuxinator::Project do
    transient do
      file { yaml_load('spec/fixtures/noroot.yml') }
    end
    
        context 'as number' do
      it 'will gracefully handle a name given as a number' do
        rendered = project_with_number_as_name
        expect(rendered.name.to_i).to_not equal 0
      end
    end
    
          it 'returns true' do
        expect(described_class.editor?).to be_truthy
      end
    end
    
          it 'does not set name option' do
        expect(window.tmux_new_window_command).to eq full_command
      end
    end
  end
    
        # Returns the filename, the same way as ':basename.:extension' would.
    def filename attachment, style_name
      [ basename(attachment, style_name), extension(attachment, style_name) ].delete_if(&:empty?).join('.'.freeze)
    end