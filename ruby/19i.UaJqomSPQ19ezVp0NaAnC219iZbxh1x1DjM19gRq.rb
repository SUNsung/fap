  it 'no errors without a user' do
    expect(-> { GivenDailyLike.increment_for(nil) }).not_to raise_error
    expect(-> { GivenDailyLike.decrement_for(nil) }).not_to raise_error
  end
    
            css('td h3', '.l-sub-section > h3', '.alert h3', '.row-margin > h3', '.api-heading ~ h3', '.api-heading + h2', '.metadata-member h3').each do |node|
          node.name = 'h4'
        end
    
            css('div.badges').each do |node|
          node.name = 'p'
        end
    
        it 'returns nil if there is no matching argument' do
      expect(subject.value('baz')).to be nil
    end
  end
    
          # Calls the given block for each `when` node in the `case` statement.
      # If no block is given, an `Enumerator` is returned.
      #
      # @return [self] if a block is given
      # @return [Enumerator] if no block is given
      def each_when
        return when_branches.to_enum(__method__) unless block_given?
    
          # Checks whether this node body is a void context.
      #
      # @return [Boolean] whether the `def` node body is a void context
      def void_context?
        method?(:initialize) || assignment_method?
      end
    
          # Returns the iteration variable of the `for` loop.
      #
      # @return [Node] The iteration variable of the `for` loop
      def variable
        node_parts[0]
      end
    
          # Checks whether any of the key value pairs in the `hash` literal are on
      # the same line.
      #
      # @note A multiline `pair` is considered to be on the same line if it
      #       shares any of its lines with another `pair`
      #
      # @return [Boolean] whether any `pair` nodes are on the same line
      def pairs_on_same_line?
        pairs.each_cons(2).any? { |first, second| first.same_line?(second) }
      end
    
    module RuboCop
  module AST
    # Common functionality for nodes that can be used as hash elements:
    # `pair`, `kwsplat`
    module HashElementNode
      # Returns the key of this `hash` element.
      #
      # @note For keyword splats, this returns the whole node
      #
      # @return [Node] the key of the hash element
      def key
        node_parts[0]
      end
    
          # Whether the last argument of the node is a block pass,
      # i.e. `&block`.
      #
      # @return [Boolean] whether the last argument of the node is a block pass
      def block_argument?
        arguments? &&
          (last_argument.block_pass_type? || last_argument.blockarg_type?)
      end
    end
  end
end

    
    # component must be String
def encodeURIComponent(componentString)
  ::URI::URIEncodeComponent(componentString)
end
    
          def versions
        i = @versions.size + 1
        @versions.map do |v|
          i -= 1
          { :id        => v.id,
            :id7       => v.id[0..6],
            :num       => i,
            :author    => v.author.name.respond_to?(:force_encoding) ? v.author.name.force_encoding('UTF-8') : v.author.name,
            :message   => v.message.respond_to?(:force_encoding) ? v.message.force_encoding('UTF-8') : v.message,
            :date      => v.authored_date.strftime('%B %d, %Y'),
            :gravatar  => Digest::MD5.hexdigest(v.author.email.strip.downcase),
            :identicon => self._identicon_code(v.author.email),
            :date_full => v.authored_date,
            :files     => v.stats.files.map { |f,*rest|
              page_path = extract_renamed_path_destination(f)
              page_path = remove_page_extentions(page_path)
              { :file => f,
                :link => '#{page_path}/#{v.id}'
              }
            }
          }
        end
      end
    
        assert body.include?('<span class='username'>Charles Pence</span>'), '/latest_changes should include the Author Charles Pence'
    assert body.include?('a8ad3c0'), '/latest_changes should include the :latest_changes_count commit'
    assert !body.include?('60f12f4'), '/latest_changes should not include more than latest_changes_count commits'
    assert body.include?('<a href='Data-Two.csv/874f597a5659b4c3b153674ea04e406ff393975e'>Data-Two.csv</a>'), '/latest_changes include links to modified files in #{body}'
    assert body.include?('<a href='Hobbit/874f597a5659b4c3b153674ea04e406ff393975e'>Hobbit.md</a>'), '/latest_changes should include links to modified pages in #{body}'
  end
    
    desc 'Update gemspec'
task :gemspec => :validate do
  # read spec file and split out manifest section
  spec = File.read(gemspec_file)
  head, manifest, tail = spec.split('  # = MANIFEST =\n')
    
        class MapGollum
      def initialize(base_path)
        @mg = Rack::Builder.new do
          
          map '/#{base_path}' do
            run Precious::App
          end
          map '/' do
            run Proc.new { [302, { 'Location' => '/#{base_path}' }, []] }
          end
          map '/*' do
            run Proc.new { [302, { 'Location' => '/#{base_path}' }, []] }
          end
          
        end
      end