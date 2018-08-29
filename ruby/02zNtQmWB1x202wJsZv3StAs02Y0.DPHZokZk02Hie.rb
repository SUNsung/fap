
        
        Given /^(?:|[tT]hat )?following user[s]?(?: exist[s]?)?:$/ do |table|
  table.hashes.each do |hash|
    if hash.has_key? 'username' and hash.has_key? 'email'
      step %{a user named '#{hash['username']}' with email '#{hash['email']}'}
    elsif hash.has_key? 'username'
      step %{a user with username '#{hash['username']}'}
    elsif hash.has_key? 'email'
      step %{a user with email '#{hash['email']}'}
    end
  end
end
    
    require 'cucumber/api_steps'
    
        it 'generates the aspects_manage_contacts_json fixture', fixture: true do
      # adds one not mutual contact
      bob.share_with(FactoryGirl.create(:person), @aspect)