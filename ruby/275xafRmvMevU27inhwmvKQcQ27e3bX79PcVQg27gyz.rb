
        
          # GET /books/1
  # GET /books/1.json
  def show
  end
    
            def explicit_block_local_variable?
          @declaration_node.shadowarg_type?
        end
      end
    end
  end
end

    
            def autocorrect(node)
          # Regexp#match can take a second argument, but this cop doesn't
          # register an offense in that case
          return unless node.first_argument.regexp_type?
    
                previous.push(when_node.conditions)
          end
        end
    
            def on_block(node)
          on_body_of_reduce(node) do |body|
            void_next = body.each_node(:next).find do |n|
              n.children.empty? && parent_block_node(n) == node
            end
    
            def argument_positions(arguments)
          optarg_positions = []
          arg_positions = []
    
      context 'called with four widths' do
    it 'applies different widths to all sides' do
      rule = 'border-width: 7px 8px 9px 10px'
    
      context 'called with one size' do
    it 'applies same width to all sides' do
      ruleset = 'position: fixed; ' +
                'top: 1em; ' +
                'right: 1em; ' +
                'bottom: 1em; ' +
                'left: 1em;'
    
      context 'called with two sizes' do
    it 'applies to height and width' do
      rule = 'height: 2em; width: 1em;'