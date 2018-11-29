
        
                    @template_object.label(@object_name, @sanitized_attribute_name, @text, html_options, &block)
          end
        end
    
            private
    
          GivenDailyLike.decrement_for(user.id)
      expect(value_for(user.id, dt)).to eq(1)
      expect(limit_reached_for(user.id, dt)).to eq(false)
    
        # The category for users with trust level 3 has been created.
    # Add initial permissions and description. They can be changed later.
    
    describe Admin::UsersController do
  it 'requires to be signed in as an admin' do
    login_as(users(:bob))
    visit admin_users_path
    expect(page).to have_text('Admin access required to view that page.')
  end
    
          open_dry_run_modal(agent)
      find('.dry-run-event-sample').click
      within(:css, '.modal .builder') do
        expect(page).to have_text('http://xkcd.com/')
      end
      click_on('Dry Run')
      expect(page).to have_text('Biologists play reverse')
      expect(page).to have_selector(:css, 'li[role='presentation'].active a[href='#tabEvents']')
    end
    
              @bar1 = Agents::DotBar.new(name: 'bar1').tap { |agent|
            agent.user = users(:bob)
            agent.sources << @foo
            agent.save!
          },
    
        it 'unregisters disabled SchedulerAgents' do
      @scheduler.schedule_scheduler_agents