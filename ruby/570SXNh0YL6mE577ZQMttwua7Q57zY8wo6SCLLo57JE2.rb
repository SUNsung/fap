
        
                    -- Return the time part and the sequence part. OR appears
            -- faster here than addition, but they're equivalent:
            -- time_part has no trailing two bytes, and tail is only
            -- the last two bytes.
            RETURN time_part | tail;
          END
        $$ LANGUAGE plpgsql VOLATILE;
      SQL
    end
    
      def meta
    object.file.meta
  end
end

    
      describe 'for a suspension' do
    before do
      subject.call(DomainBlock.create!(domain: 'evil.org', severity: :suspend))
    end