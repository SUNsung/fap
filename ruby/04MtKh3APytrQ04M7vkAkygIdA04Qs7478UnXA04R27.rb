
        
              # Associates the given database ID with the current object.
      #
      # database_id - The ID of the corresponding database row.
      def cache_database_id(database_id)
        Caching.write(cache_key, database_id)
      end
    
    Capybara.javascript_driver = :javascript_test
    
        it 'allows finding elements and checking if they are disabled' do
      expect(string.find('//form/input[@name='bleh']')).to be_disabled
      expect(string.find('//form/input[@name='meh']')).not_to be_disabled
    end
    
        it 'should allow to adjust the delay' do
      @session.accept_alert wait: 10 do
        @session.click_link('Open slow alert')
      end
      expect(@session).to have_xpath('//a[@id='open-slow-alert' and @opened='true']')
    end
  end
end

    
        it 'raises if passed an invalid value' do
      expect { @session.find_link(download: 37) }.to raise_error ArgumentError
    end
  end
end
