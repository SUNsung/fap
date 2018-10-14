
        
              GivenDailyLike.decrement_for(user.id)
      expect(value_for(user.id, dt)).to eq(0)
      expect(limit_reached_for(user.id, dt)).to eq(false)
    end
    
    Badge.seed do |b|
  b.id = Badge::FirstMention
  b.name = 'First Mention'
  b.badge_type_id = BadgeType::Bronze
  b.multiple_grant = false
  b.target_posts = true
  b.show_posts = true
  b.query = BadgeQueries::FirstMention
  b.badge_grouping_id = BadgeGrouping::GettingStarted
  b.default_badge_grouping_id = BadgeGrouping::GettingStarted
  b.trigger = Badge::Trigger::PostRevision
  b.system = true
end
    
    Group.user_trust_level_change!(-1, TrustLevel[4])
    
        def stylesheets_path
      File.join assets_path, 'stylesheets'
    end
    
        def pos=(i)
      @s.pos = str_to_byte_pos i
      i
    end
    
    Then /^I should have (\d+) nsfw posts$/ do |num_posts|
  page.should have_css('.nsfw-shield', count: num_posts.to_i)
end
    
          get :index, params: {conversation_id: @conv1.id}
      save_fixture(html_for('body'), 'conversations_read')
    end
  end