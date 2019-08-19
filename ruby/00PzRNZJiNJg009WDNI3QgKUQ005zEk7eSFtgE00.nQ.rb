
        
            reversible(&method(:up_down))
  end
    
        it 'generates a jasmine fixture', :fixture => true do
      contact = alice.contact_for(bob.person)
      aspect = alice.aspects.create(:name => 'people')
      contact.aspects << aspect
      contact.save
      get :new, params: {person_id: bob.person.id}
      save_fixture(html_for('body'), 'status_message_new')
    end
  end
end

    
    require 'minitest/autorun'
    
        it 'allows sidekiq_options to point to different Redi' do
      conn = MiniTest::Mock.new
      conn.expect(:multi, [0, 1])
      DWorker.sidekiq_options('pool' => ConnectionPool.new(size: 1) { conn })
      DWorker.perform_async(1,2,3)
      conn.verify
    end
    
          JoeWorker.perform_in(0.01, 0)
    
    __END__