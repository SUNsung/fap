
        
          test 'token_and_options returns empty string with empty token' do
    token = ''.dup
    actual = ActionController::HttpAuthentication::Token.token_and_options(sample_request(token)).first
    expected = token
    assert_equal(expected, actual)
  end
    
        class MessageDelivery < ActionMailer::MessageDelivery # :nodoc:
      def initialize(mailer_class, action, params, *args)
        super(mailer_class, action, *args)
        @params = params
      end
    
            def set_expected_mail
          @expected = Mail.new
          @expected.content_type ['text', 'plain', { 'charset' => charset }]
          @expected.mime_version = '1.0'
        end
    
    # Emulate AV railtie
require 'action_view'
ActionMailer::Base.include(ActionView::Layouts)
    
        def length
      @entries.length
    end
    
        def contains?(url, options = nil)
      !!subpath_to(url, options)
    end
    
            css('> .section', '#preamble', 'a[href*='dict.html']', 'code var', 'code strong').each do |node|
          node.before(node.children).remove
        end
    
              # Underscore methods
          if name.start_with?('Underscore')
            node.at_css('~ ul').css('li').each do |li|
              name = [type.downcase, li.at_css('a').content.split.first].join('.')
              id = name.parameterize
              li['id'] = id
              entries << [name, id, type]
            end
            next
          end
    
            css('.method-signature', 'pre').each do |node|
          node.name = 'pre'
          node.content = node.content.strip
          node['data-language'] = 'php'
        end
    
            # Helper method to get access to the class variable. This is mostly
        # exposed for tests. This shouldn't be mucked with directly, since it's
        # structure may change at any time.
        def registered; @@registered; end
      end
    end
  end
end

    
          def initialize(string)
        @value = string
      end
    
              # Repackage the box
          output_name = @env.vagrantfile.config.package.name || 'package.box'
          output_path = Pathname.new(File.expand_path(output_name, FileUtils.pwd))
          box.repackage(output_path)
    
            type = argv.shift.to_sym
        name = argv.shift.to_sym
    
        def initialize(attributes={})
      assign_attributes(attributes)
      yield(self) if block_given?
    end
    
        @inner.log_level = log_level
    Sass.logger = @inner
  end
    
            def log_level?(level, min_level)
          log_levels[level] >= log_levels[min_level]
        end
    
        # Returns a representation of the query as an array of strings and
    # potentially {Sass::Script::Tree::Node}s (if there's interpolation in it).
    # When the interpolation is resolved and the strings are joined together,
    # this will be the string representation of this query.
    #
    # @return [Array<String, Sass::Script::Tree::Node>]
    def to_a
      Sass::Util.intersperse(queries.map {|q| q.to_a}, ', ').flatten
    end
    
            def on_send(node)
          return unless node.receiver && node.method?(:freeze) &&
                        immutable_literal?(node.receiver)
    
            # @param lines [Array<String>]
        # @param annotations [Array<(Integer, String)>]
        #   each entry is the annotated line number and the annotation text
        #
        # @note annotations are sorted so that reconstructing the annotation
        #   text via {#to_s} is deterministic
        def initialize(lines, annotations)
          @lines       = lines.freeze
          @annotations = annotations.sort.freeze
        end