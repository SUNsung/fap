
        
          path = 'assets/stylesheets'
  css_path = args.with_defaults(css_path: 'tmp')[:css_path]
  puts Term::ANSIColor.bold 'Compiling SCSS in #{path}'
  Dir.mkdir(css_path) unless File.directory?(css_path)
  %w(_bootstrap bootstrap/_theme).each do |file|
    save_path = '#{css_path}/#{file.sub(/(^|\/)?_+/, '\1').sub('/', '-')}.css'
    puts Term::ANSIColor.cyan('  #{save_path}') + '...'
    engine    = Sass::Engine.for_file('#{path}/#{file}.scss', syntax: :scss, load_paths: [path])
    css       = engine.render
    File.open(save_path, 'w') { |f| f.write css }
  end
end
    
    module RuboCop
  module Cop
    class VariableForce
      # A Variable represents existence of a local variable.
      # This holds a variable declaration node,
      # and some states of the variable.
      class Variable
        VARIABLE_DECLARATION_TYPES =
          (VARIABLE_ASSIGNMENT_TYPES + ARGUMENT_DECLARATION_TYPES).freeze
    
            def each_unnecessary_space_match(node, &blk)
          each_match_range(
            contents_range(node),
            MULTIPLE_SPACES_BETWEEN_ITEMS_REGEX,
            &blk
          )
        end
      end
    end
  end
end

    
            def autocorrect(node)
          # Regexp#match can take a second argument, but this cop doesn't
          # register an offense in that case
          return unless node.first_argument.regexp_type?
    
            private
    
      let(:source) { ''something'.intern' }
  let(:corrected) { autocorrect_source(source) }
    
              end
        RUBY
      end
    end
    
        def self.each_definition(&block)
      instance.each_definition(&block)
    end
    
        def define_query
      name = @name
      @klass.send :define_method, '#{@name}?' do
        send(name).file?
      end
    end
    
          def invert_add_attachment(args)
        [:remove_attachment, args]
      end
    end
  end
end

    
          def create_validating_before_filter(attribute, validator_class, options)
        if_clause = options.delete(:if)
        unless_clause = options.delete(:unless)
        send(:'before_#{attribute}_post_process', :if => if_clause, :unless => unless_clause) do |*args|
          validator_class.new(options.dup).validate(self)
        end
      end
    
          def validate_blacklist(record, attribute, value)
        if forbidden_types.present? && forbidden_types.any? { |type| type === value }
          mark_invalid record, attribute, forbidden_types
        end
      end