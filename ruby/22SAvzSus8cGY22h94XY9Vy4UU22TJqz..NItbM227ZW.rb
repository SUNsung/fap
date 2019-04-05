
        
            def add(entry)
      if entry.is_a? Array
        entry.each(&method(:add))
      else
        add_entry(entry) unless entry.root?
      end
    end
    
        attr_accessor :name, :type, :path
    
            def store_pages(store)
          instrument 'info.doc', msg: 'Fetching redirections...'
          with_redirections do
            instrument 'info.doc', msg: 'Continuing...'
            super
          end
        end
    
        def terminal_width
      return @terminal_width if defined? @terminal_width
    
          updated_note = Notification.find(note.id)
      expect(updated_note.unread).to eq(true)
      expect(updated_note.updated_at.iso8601).to eq(note.updated_at.iso8601)
    end