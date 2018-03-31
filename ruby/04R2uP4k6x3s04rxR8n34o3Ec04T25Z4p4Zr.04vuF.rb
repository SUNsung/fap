
        
            def push(*names)
      @filters.push *filter_const(names)
    end
    
        def name=(value)
      @name = value.try :strip
    end
    
            css('.method-detail').each do |node|
          node.at_css('.method-name')['id'] = node.at_css('a')['id']
        end
    
                -- Finally, add our sequence number to our base, and chop
            -- it to the last two bytes
            tail := (
              (sequence_base + nextval(table_name || '_id_seq'))
              & 65535);
    
            expect(response).to have_http_status(:missing)
      end
    end
  end
end

    
    def test_app(bundle)
  @bundle_ids.include?(bundle) ? 0 : 1
end
    
          expect('.margin-implied-left').to have_rule(rule)
    end
  end
    
          expect('.all-text-inputs-hover').to have_ruleset(ruleset)
    end
  end