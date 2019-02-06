
        
        namespace :test do
  desc 'Run the ruby tests (without sass-spec)'
  Rake::TestTask.new('ruby') do |t|
    t.libs << 'test'
    test_files = FileList[scope('test/**/*_test.rb')]
    test_files.exclude(scope('test/rails/*'))
    test_files.exclude(scope('test/plugins/*'))
    t.test_files = test_files
    t.warning = true
    t.verbose = true
  end
    
    module Sass
  # This class converts CSS documents into Sass or SCSS templates.
  # It works by parsing the CSS document into a {Sass::Tree} structure,
  # and then applying various transformations to the structure
  # to produce more concise and idiomatic Sass/SCSS.
  #
  # Example usage:
  #
  #     Sass::CSS.new('p { color: blue }').render(:sass) #=> 'p\n  color: blue'
  #     Sass::CSS.new('p { color: blue }').render(:scss) #=> 'p {\n  color: blue; }'
  class CSS
    # @param template [String] The CSS stylesheet.
    #   This stylesheet can be encoded using any encoding
    #   that can be converted to Unicode.
    #   If the stylesheet contains an `@charset` declaration,
    #   that overrides the Ruby encoding
    #   (see {file:SASS_REFERENCE.md#Encodings the encoding documentation})
    # @option options :old [Boolean] (false)
    #     Whether or not to output old property syntax
    #     (`:color blue` as opposed to `color: blue`).
    #     This is only meaningful when generating Sass code,
    #     rather than SCSS.
    # @option options :indent [String] ('  ')
    #     The string to use for indenting each line. Defaults to two spaces.
    def initialize(template, options = {})
      if template.is_a? IO
        template = template.read
      end
    
          opts.on('-F', '--from FORMAT',
        'The format to convert from. Can be css, scss, sass.',
        'By default, this is inferred from the input filename.',
        'If there is none, defaults to css.') do |name|
        @options[:from] = name.downcase.to_sym
        raise 'sass-convert no longer supports LessCSS.' if @options[:from] == :less
        unless [:css, :scss, :sass].include?(@options[:from])
          raise 'Unknown format for sass-convert --from: #{name}'
        end
      end
    
    # Single-line step scoper
When /^(.*) within (.*[^:])$/ do |step, parent|
  with_scope(parent) { When step }
end
    
      def migration_file_name
    '#{migration_name}.rb'
  end
    
        def initialize(filepath)
      @filepath = filepath
    end