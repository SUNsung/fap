
        
        task default: :test

    
    namespace :bower do
    
            unless File.directory?(File.dirname(output))
          puts_action :directory, :green, File.dirname(output)
          FileUtils.mkdir_p(File.dirname(output))
        end
        puts_action :convert, :green, f
        if File.exist?(output)
          puts_action :overwrite, :yellow, output
        else
          puts_action :create, :green, output
        end
    
      # A single media query.
  #
  #     [ [ONLY | NOT]? S* media_type S* | expression ] [ AND S* expression ]*
  class Query
    # The modifier for the query.
    #
    # When parsed as Sass code, this contains strings and SassScript nodes. When
    # parsed as CSS, it contains a single string (accessible via
    # \{#resolved_modifier}).
    #
    # @return [Array<String, Sass::Script::Tree::Node>]
    attr_accessor :modifier
    
          before_string_or_interp =
        if interp.before
          to_string_interpolation(interp.before)
        else
          string_literal('')
        end
      if interp.before && interp.whitespace_before
        before_string_or_interp = concat(before_string_or_interp, string_literal(' '))
      end