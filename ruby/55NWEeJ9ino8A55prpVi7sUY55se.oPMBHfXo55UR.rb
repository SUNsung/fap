
        
            it 'returns a label 'No' if a given agent is not working' do
      stub(@agent).working? { false }
      label = working(@agent)
      expect(label).to be_html_safe
      expect(Nokogiri(label).text).to eq 'No'
    end
  end
    
          expect(data[:agents][guid_order(agent_list, :jane_weather_agent)]).not_to have_key(:propagate_immediately) # can't receive events
      expect(data[:agents][guid_order(agent_list, :jane_rain_notifier_agent)]).not_to have_key(:schedule) # can't be scheduled
    end
    
        it 'should raise error when response says unauthorized' do
      stub(HTTParty).post { {'Response' => 'Not authorized'} }
      expect { @checker.send_notification({}) }.to raise_error(StandardError, /Not authorized/)
    end
    
    # Returns whether or not the repository, or specific files,
# has/have changed since a given revision.
#
# @param rev [String] The revision to check against
# @param files [Array<String>] The files to check.
#   If this is empty, checks the entire repository
def changed_since?(rev, *files)
  IO.popen('git diff --exit-code #{rev} #{files.join(' ')}') {}
  return !$?.success?
end
    
      # Compile a file on disk to CSS.
  #
  # @raise [Sass::SyntaxError] if there's an error in the document
  # @raise [Encoding::UndefinedConversionError] if the source encoding
  #   cannot be converted to UTF-8
  # @raise [ArgumentError] if the document uses an unknown encoding with `@charset`
  #
  # @overload compile_file(filename, options = {})
  #   Return the compiled CSS rather than writing it to a file.
  #
  #   @param filename [String] The path to the Sass, SCSS, or CSS file on disk.
  #   @param options [{Symbol => Object}] An options hash;
  #     see {file:SASS_REFERENCE.md#Options the Sass options documentation}
  #   @return [String] The compiled CSS.
  #
  # @overload compile_file(filename, css_filename, options = {})
  #   Write the compiled CSS to a file.
  #
  #   @param filename [String] The path to the Sass, SCSS, or CSS file on disk.
  #   @param options [{Symbol => Object}] An options hash;
  #     see {file:SASS_REFERENCE.md#Options the Sass options documentation}
  #   @param css_filename [String] The location to which to write the compiled CSS.
  def self.compile_file(filename, *args)
    options = args.last.is_a?(Hash) ? args.pop : {}
    css_filename = args.shift
    result = Sass::Engine.for_file(filename, options).render
    if css_filename
      options[:css_filename] ||= css_filename
      open(css_filename, 'w') {|css_file| css_file.write(result)}
      nil
    else
      result
    end
  end
end
    
            parser = Sass::SCSS::Parser.new(value,
          @options[:filename], @options[:importer],
          @line, to_parser_offset(@offset))
        parsed_value = parser.parse_declaration_value
        end_offset = start_offset + value.length
      elsif value.strip.empty?
        parsed_value = [Sass::Script::Tree::Literal.new(Sass::Script::Value::String.new(''))]
        end_offset = start_offset
      else
        expr = parse_script(value, :offset => to_parser_offset(start_offset))
        end_offset = expr.source_range.end_pos.offset - 1
        parsed_value = [expr]
      end
      node = Tree::PropNode.new(parse_interp(name), parsed_value, prop)
      node.value_source_range = Sass::Source::Range.new(
        Sass::Source::Position.new(line.index, to_parser_offset(start_offset)),
        Sass::Source::Position.new(line.index, to_parser_offset(end_offset)),
        @options[:filename], @options[:importer])
      if !node.custom_property? && value.strip.empty? && line.children.empty?
        raise SyntaxError.new(
          'Invalid property: \'#{node.declaration}\' (no value).' +
          node.pseudo_class_selector_message)
      end
    
    module Sass
  # The abstract base class for lexical environments for SassScript.
  class BaseEnvironment
    class << self
      # Note: when updating this,
      # update sass/yard/inherited_hash.rb as well.
      def inherited_hash_accessor(name)
        inherited_hash_reader(name)
        inherited_hash_writer(name)
      end