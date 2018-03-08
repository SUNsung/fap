
        
          out = File.join(output, site + '.txt')
  File.unlink(out) if File.exist?(out)
    
          when :bye
        sessions.delete(s[:session])
    
      if options.respond_to? 'keys'
    options.each do |k,v|
      unless v.nil?
        v = v.join ',' if v.respond_to? 'join'
        v = v.to_json if v.respond_to? 'keys'
        output += ' data-#{k.sub'_','-'}='#{v}''
      end
    end
  elsif options.respond_to? 'join'
    output += ' data-value='#{config[key].join(',')}''
  else
    output += ' data-value='#{config[key]}''
  end
  output += '></#{tag}>'
end
    
    Liquid::Template.register_tag('include_array', Jekyll::IncludeArrayTag)

    
            def create
          authorize! :create, StockLocation
          @stock_location = StockLocation.new(stock_location_params)
          if @stock_location.save
            respond_with(@stock_location, status: 201, default_template: :show)
          else
            invalid_resource!(@stock_location)
          end
        end
    
            def stock_movement_params
          params.require(:stock_movement).permit(permitted_stock_movement_attributes)
        end
      end
    end
  end
end

    
        respond_to do |format|
      if @book.save
        format.html { redirect_to @book, notice: 'Book was successfully created.' }
        format.json { render :show, status: :created, location: @book }
      else
        format.html { render :new }
        format.json { render json: @book.errors, status: :unprocessable_entity }
      end
    end
  end
    
            def argument?
          ARGUMENT_DECLARATION_TYPES.include?(@declaration_node.type)
        end
    
            def each_misplaced_optional_arg(arguments)
          optarg_positions, arg_positions = argument_positions(arguments)
          return if optarg_positions.empty? || arg_positions.empty?