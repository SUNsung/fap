
        
              it 'deactivates an existing user' do
        visit admin_users_path
        expect(page).to have_no_text('inactive')
        find(:css, 'a[href='/admin/users/#{users(:bob).id}/deactivate']').click
        expect(page).to have_text('inactive')
        users(:bob).reload
        expect(users(:bob)).not_to be_active
      end
    
      describe '#status' do
    it 'works for failed jobs' do
      job.failed_at = Time.now
      expect(status(job)).to eq('<span class='label label-danger'>failed</span>')
    end
    
      describe '#pretty_jsonify' do
    it 'escapes </script> tags in the output JSON' do
      cleaned_json = Utils.pretty_jsonify(:foo => 'bar', :xss => '</script><script>alert('oh no!')</script>')
      expect(cleaned_json).not_to include('</script>')
      expect(cleaned_json).to include('<\\/script>')
    end
  end
    
            raise ArgumentError, '#{self.class.command_name} does not take arguments.'
      end
    
      def env
    self.class.env
  end
    
      def append(*paths)
    @paths = parse(*@paths, *paths)
    self
  end
    
    # create and write to opml file
xml = Builder::XmlMarkup.new(indent: 2)
xml.instruct! :xml, version: '1.0', encoding: 'UTF-8'
xml.tag!('opml', version: '1.0') do
  # head
  xml.tag!('head') do
    xml.title TITLE
  end
    
            # Prints the list of specs & pod cache dirs for a single pod name.
        #
        # This output is valid YAML so it can be parsed with 3rd party tools
        #
        # @param [Array<Hash>] cache_descriptors
        #        The various infos about a pod cache. Keys are
        #        :spec_file, :version, :release and :slug
        #
        def print_pod_cache_infos(pod_name, cache_descriptors)
          UI.puts '#{pod_name}:'
          cache_descriptors.each do |desc|
            if @short_output
              [:spec_file, :slug].each { |k| desc[k] = desc[k].relative_path_from(@cache.root) }
            end
            UI.puts('  - Version: #{desc[:version]}')
            UI.puts('    Type:    #{pod_type(desc)}')
            UI.puts('    Spec:    #{desc[:spec_file]}')
            UI.puts('    Pod:     #{desc[:slug]}')
          end
        end
      end
    end
  end
end

    
        end
  end
end

    
    # test/spec/mini 3
# http://gist.github.com/25455
# chris@ozmm.org
# file:lib/test/spec/mini.rb
def context(*args, &block)
  return super unless (name = args.first) && block
  require 'test/unit'
  klass = Class.new(defined?(ActiveSupport::TestCase) ? ActiveSupport::TestCase : Test::Unit::TestCase) do
    def self.test(name, &block)
      define_method('test_#{name.gsub(/\W/, '_')}', &block) if block
    end
    
    context 'Precious::Views::Page' do
  setup do
    examples = testpath 'examples'
    @path    = File.join(examples, 'test.git')
    FileUtils.cp_r File.join(examples, 'empty.git'), @path, :remove_destination => true
    @wiki = Gollum::Wiki.new(@path)
  end
    
          @CONF[:IRB_RC].call(irb.context) if @CONF[:IRB_RC]
      @CONF[:MAIN_CONTEXT] = irb.context
    
        def emoji(name)
      if emoji = Gemojione.index.find_by_name(name)
        IO.read(EMOJI_PATHNAME.join('#{emoji['unicode']}.png'))
      else
        fail ArgumentError, 'emoji `#{name}' not found'
      end
    end
    
      context 'heredoc' do
    let(:cop_config) { { 'EnforcedStyle' => 'same_line' } }
    
          # Returns the body of the `for` loop.
      #
      # @return [Node, nil] The body of the `for` loop.
      def body
        node_parts[2]
      end
    end
  end
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
    
          # Checks whether this node is an `if` statement. (This is not true of
      # ternary operators and `unless` statements.)
      #
      # @return [Boolean] whether the node is an `if` statement
      def if?
        keyword == 'if'
      end
    
    module RuboCop
  module AST
    # A node extension for `kwsplat` nodes. This will be used in place of a
    # plain  node when the builder constructs the AST, making its methods
    # available to all `kwsplat` nodes within RuboCop.
    class KeywordSplatNode < Node
      include HashElementNode