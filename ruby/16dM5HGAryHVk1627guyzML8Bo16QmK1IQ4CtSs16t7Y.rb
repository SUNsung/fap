
        
            def self.references(attributes)
      attributes.map do |key, value|
        if value.is_a?(Hash)
          key
        else
          key = key.to_s
          key.split('.'.freeze).first if key.include?('.'.freeze)
        end
      end.compact
    end
    
      test 'overriding has_many_attached methods works' do
    # attach blobs before messing with getter, which breaks `#attach`
    @user.highlights.attach create_blob(filename: 'funky.jpg'), create_blob(filename: 'wonky.jpg')
    
    class TestAutosaveAssociationValidationsOnAHasOneAssociation < ActiveRecord::TestCase
  self.use_transactional_tests = false unless supports_savepoints?
    
    class ActionCable::Channel::BaseTest < ActionCable::TestCase
  class ActionCable::Channel::Base
    def kick
      @last_action = [ :kick ]
    end
    
      test 'processing invalid message' do
    run_in_eventmachine do
      open_connection
    
      test 'unsubscribe command without an identifier' do
    run_in_eventmachine do
      setup_connection
    
        options[:attribution] = <<-HTML
      &copy; 2011&ndash;2018 Twitter, Inc.<br>
      &copy; 2011&ndash;2018 The Bootstrap Authors<br>
      Code licensed under the MIT License.<br>
      Documentation licensed under the Creative Commons Attribution License v3.0.
    HTML
    
        version '1.5' do
      self.release = '1.5.3'
      self.base_urls = [
        'https://hexdocs.pm/elixir/#{release}/',
        'https://hexdocs.pm/eex/#{release}/',
        'https://hexdocs.pm/ex_unit/#{release}/',
        'https://hexdocs.pm/iex/#{release}/',
        'https://hexdocs.pm/logger/#{release}/',
        'https://hexdocs.pm/mix/#{release}/',
        'https://elixir-lang.org/getting-started/'
      ]
    end
    
        options[:attribution] = <<-HTML
      &copy; 2005&ndash;2018 Haxe Foundation<br>
      Licensed under a MIT license.
    HTML
    
        html_filters.push 'php/internal_urls', 'php/entries', 'php/clean_html', 'title'
    text_filters.push 'php/fix_urls'
    
        version 'C++' do
      include MultipleBaseUrls
      self.base_urls = ['https://www.tensorflow.org/api_docs/cc/', 'https://www.tensorflow.org/api_guides/cc/']
    end
    
        delegate :empty?, :blank?, to: :pages
    
          def auth_user_unless_prompt_none!
        prompt = params[:prompt]
        if prompt && prompt.include?('none')
          handle_prompt_none
        elsif prompt && prompt.include?('login')
          new_params = params.except('controller', 'action').permit!.to_h.merge(prompt: prompt.remove('login'))
          reauthenticate(new_params)
        else
          authenticate_user!
        end
      end
    
    Liquid::Template.register_tag('img', Jekyll::ImageTag)

    
    end
    
      # Extracts raw content DIV from template, used for page description as {{ content }}
  # contains complete sub-template code on main page level
  def raw_content(input)
    /<div class='entry-content'>(?<content>[\s\S]*?)<\/div>\s*<(footer|\/article)>/ =~ input
    return (content.nil?) ? input : content
  end
    
          Dir.chdir(file_path) do
        contents = file.read
        if contents =~ /\A-{3}.+[^\A]-{3}\n(.+)/m
          contents = $1.lstrip
        end
        contents = pre_filter(contents)
        if @raw
          contents
        else
          partial = Liquid::Template.parse(contents)
          context.stack do
            partial.render(context)
          end
        end
      end
    end
  end
end
    
        def initialize(tag_name, markup, tokens)
      @videos = markup.scan(/((https?:\/\/|\/)\S+\.(webm|ogv|mp4)\S*)/i).map(&:first).compact
      @poster = markup.scan(/((https?:\/\/|\/)\S+\.(png|gif|jpe?g)\S*)/i).map(&:first).compact.first
      @sizes  = markup.scan(/\s(\d\S+)/i).map(&:first).compact
      super
    end