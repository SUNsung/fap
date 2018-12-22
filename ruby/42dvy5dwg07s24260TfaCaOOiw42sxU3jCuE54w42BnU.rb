
        
                      if value_came_from_user? && object.respond_to?(method_before_type_cast)
                object.public_send(method_before_type_cast)
              else
                value
              end
            end
          end
    
            prefixes = /\blayouts/.match?(_implied_layout_name) ? [] : ['layouts']
        default_behavior = 'lookup_context.find_all('#{_implied_layout_name}', #{prefixes.inspect}, false, [], { formats: formats }).first || super'
        name_clause = if name
          default_behavior
        else
          <<-RUBY
            super
          RUBY
        end
    
        def find(*args)
      find_all(*args).first || raise(MissingTemplate.new(self, *args))
    end
    
    def version
  Jekyll::VERSION
end
    
    Then(%r!^I should (not )?see '(.*)' in '(.*)'$!) do |negative, text, file|
  step %(the '#{file}' file should exist)
  regexp = Regexp.new(text, Regexp::MULTILINE)
  if negative.nil? || negative.empty?
    expect(file_contents(file)).to match regexp
  else
    expect(file_contents(file)).not_to match regexp
  end
end
    
    #
    
    module Jekyll
  module Commands
    class NewTheme < Jekyll::Command
      class << self
        def init_with_program(prog)
          prog.command(:'new-theme') do |c|
            c.syntax 'new-theme NAME'
            c.description 'Creates a new Jekyll theme scaffold'
            c.option 'code_of_conduct', \
                     '-c', '--code-of-conduct', \
                     'Include a Code of Conduct. (defaults to false)'
    
        def no_subcommand(args)
      unless args.empty? ||
          args.first !~ %r(!/^--/!) || %w(--help --version).include?(args.first)
        deprecation_message 'Jekyll now uses subcommands instead of just switches. \
                          Run `jekyll help` to find out more.'
        abort
      end
    end
    
        def add(path, content)
      @pages[path] = content
    end
    
        def parse_as_document
      document = Nokogiri::HTML.parse @content, nil, 'UTF-8'
      @title = document.at_css('title').try(:content)
      document
    end
    
            css('th h3').each do |node|
          node.name = 'span'
        end
    
          def mod
        return @mod if defined?(@mod)
        @mod = slug[/api\/([\w\-\.]+)\//, 1]
        @mod.remove! 'angular2.' if @mod
        @mod
      end
    end
  end
end

    
      let(:cop_config) { { 'EnforcedStyle' => 'symmetrical' } }