
        
          def index
    set_table_sort sorts: %w[provider name global], default: { provider: :asc }
    
        def initialize(filters = nil)
      @filters = filters ? filters.dup : []
    end
    
        def to_json
      JSON.generate(as_json)
    end
  end
end

    
          def get_type
        name
      end