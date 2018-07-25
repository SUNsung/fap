
        
            # Read the allowed documents into the collection's array of docs.
    #
    # Returns the sorted array of docs.
    def read
      filtered_entries.each do |file_path|
        full_path = collection_dir(file_path)
        next if File.directory?(full_path)
        if Utils.has_yaml_header? full_path
          read_document(full_path)
        else
          read_static_file(file_path, full_path)
        end
      end
      docs.sort!
    end
    
              if @jekyll_opts['livereload']
            return rtn if SkipAnalyzer.skip_processing?(req, res, @jekyll_opts)
    
          def output_ext(_ext)
        '.html'
      end
    
          super
      input = @options[:input]
      if File.directory?(input)
        raise 'Error: '#{input.path}' is a directory (did you mean to use --recursive?)'
      end
      output = @options[:output]
      output = input if @options[:in_place]
      process_file(input, output)
    end
    
        # Merges this query with another. The returned query queries for
    # the intersection between the two inputs.
    #
    # Both queries should be resolved.
    #
    # @param other [Query]
    # @return [Query?] The merged query, or nil if there is no intersection.
    def merge(other)
      m1, t1 = resolved_modifier.downcase, resolved_type.downcase
      m2, t2 = other.resolved_modifier.downcase, other.resolved_type.downcase
      t1 = t2 if t1.empty?
      t2 = t1 if t2.empty?
      if (m1 == 'not') ^ (m2 == 'not')
        return if t1 == t2
        type = m1 == 'not' ? t2 : t1
        mod = m1 == 'not' ? m2 : m1
      elsif m1 == 'not' && m2 == 'not'
        # CSS has no way of representing 'neither screen nor print'
        return unless t1 == t2
        type = t1
        mod = 'not'
      elsif t1 != t2
        return
      else # t1 == t2, neither m1 nor m2 are 'not'
        type = t1
        mod = m1.empty? ? m2 : m1
      end
      Query.new([mod], [type], other.expressions + expressions)
    end
    
      # DELETE /books/1
  # DELETE /books/1.json
  def destroy
    @book.destroy
    respond_to do |format|
      format.html { redirect_to books_url, notice: 'Book was successfully destroyed.' }
      format.json { head :no_content }
    end
  end
    
            def on_case(case_node)
          case_node.when_branches.each_with_object([]) do |when_node, previous|
            when_node.each_condition do |condition|
              next unless repeated_condition?(previous, condition)
    
            def_node_matcher :multiple_compare?, <<-PATTERN
          (send (send _ {:< :> :<= :>=} $_) {:< :> :<= :>=} _)
        PATTERN
    
              [optarg_positions, arg_positions]
        end
      end
    end
  end
end

    
    shared_examples_for 'multiline literal brace layout trailing comma' do
  let(:prefix) { '' } # A prefix before the opening brace.
  let(:suffix) { '' } # A suffix for the line after the closing brace.
  let(:open) { nil } # The opening brace.
  let(:close) { nil } # The closing brace.
  let(:a) { 'a' } # The first element.
  let(:b) { 'b' } # The second element.