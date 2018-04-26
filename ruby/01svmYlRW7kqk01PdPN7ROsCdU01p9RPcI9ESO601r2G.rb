
        
            def ensure_id_sequences_exist
      # Find tables using timestamp IDs.
      connection.tables.each do |table|
        # We're only concerned with 'id' columns.
        next unless (id_col = connection.columns(table).find { |col| col.name == 'id' })
    
      yield
end
    
            expect_any_instance_of(ActivityPub::LinkedDataSignature).to receive(:verify_account!).and_return(actor)
        expect(ActivityPub::Activity).to receive(:factory).with(instance_of(Hash), actor, instance_of(Hash))
    
      def id
    object.id.to_s
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
    
        def parse_input(environment, text)
      case text
      when Script::MATCH
        name = $1
        guarded = !!$3
        val = Script::Parser.parse($2, @line, text.size - ($3 || '').size - $2.size)
    
        # Returns the three components of the interpolation, `before`, `mid`, and `after`.
    #
    # @return [Array<Node>]
    # @see #initialize
    # @see Node#children
    def children
      [@before, @mid, @after].compact
    end
    
          def update_available?(gem_name)
        latest = Gem.latest_version_for(gem_name)
        return false if latest.nil?
        latest > installed_gem_version(gem_name)
      end
    
            def initialize
          @values = []
        end
    
      # Read and eval a .rake file in such a way that `self` within the .rake file
  # refers to this plugin instance. This gives the tasks in the file access to
  # helper methods defined by the plugin.
  def eval_rakefile(path)
    contents = IO.read(path)
    instance_eval(contents, path, 1)
  end
    
        # Fetch a var from the context
    # @param [Symbol] variable The variable to fetch
    # @param [Object] default  The default value if not found
    #
    def fetch(*args)
      context.fetch(*args)
    end