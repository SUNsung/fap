
        
          def human?
    params.has_key?('human') && (params['human'].nil? || as_boolean(params['human']) == true)
  end
end

    
      def _nt_number
    start_index = index
    if node_cache[:number].has_key?(index)
      cached = node_cache[:number][index]
      if cached
        cached = SyntaxNode.new(input, index...(index + 1)) if cached == true
        @index = cached.interval.end
      end
      return cached
    end