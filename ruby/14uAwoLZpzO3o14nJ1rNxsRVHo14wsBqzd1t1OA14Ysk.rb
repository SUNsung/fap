
        
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
    
            attr_reader :name, :declaration_node, :scope,
                    :assignments, :references, :captured_by_block
        alias captured_by_block? captured_by_block