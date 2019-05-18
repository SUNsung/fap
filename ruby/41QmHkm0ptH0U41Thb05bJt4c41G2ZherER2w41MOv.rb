
        
              it 'creates a new user' do
        visit new_admin_user_path
        fill_in 'Email', with: 'test@test.com'
        fill_in 'Username', with: 'usertest'
        fill_in 'Password', with: '12345678'
        fill_in 'Password confirmation', with: '12345678'
        click_on 'Create User'
        expect(page).to have_text('User 'usertest' was successfully created.')
        expect(page).to have_text('test@test.com')
      end
    
      it 'imports a scenario that does not exist yet' do
    visit new_scenario_imports_path
    attach_file('Option 2: Upload a Scenario JSON File', File.join(Rails.root, 'data/default_scenario.json'))
    click_on 'Start Import'
    expect(page).to have_text('This scenario has a few agents to get you started. Feel free to change them or delete them as you see fit!')
    expect(page).not_to have_text('This Scenario already exists in your system.')
    check('I confirm that I want to import these Agents.')
    click_on 'Finish Import'
    expect(page).to have_text('Import successful!')
  end
    
        it 'returns a label 'No' if any falsy value is given' do
      [false, nil].each { |value|
        label = yes_no(value)
        expect(label).to be_html_safe
        expect(Nokogiri(label).text).to eq 'No'
      }
    end
  end
    
        describe '#agents_dot' do
      before do
        @agents = [
          @foo = Agents::DotFoo.new(name: 'foo').tap { |agent|
            agent.user = users(:bob)
            agent.save!
          },
    
        it 'for the afternoon' do
      expect(@scheduler.send(:hour_to_schedule_name, 17)).to eq('5pm')
    end
  end
    
    describe LiquidMigrator do
  describe 'converting JSONPath strings' do
    it 'should work' do
      expect(LiquidMigrator.convert_string('$.data', true)).to eq('{{data}}')
      expect(LiquidMigrator.convert_string('$.data.test', true)).to eq('{{data.test}}')
      expect(LiquidMigrator.convert_string('$first_title', true)).to eq('{{first_title}}')
    end
    
      let :new_extract do
    {
      'url' => { 'css' => '#comic img', 'value' => '@src' },
      'title' => { 'css' => '#comic img', 'value' => '@alt' },
      'hovertext' => { 'css' => '#comic img', 'value' => '@title', 'hidden' => true }
    }
  end
    
        def links
      context[:links]
    end
    
        private
    
    # This bin wrapper runs the `pod` command in a OS X sandbox. The reason for this
# is to ensure that people can’t use malicious code from pod specifications.
#
# It does this by creating a ‘seatbelt’ profile on the fly and executing the
# given command through `/usr/bin/sandbox-exec`. This profile format is an
# undocumented format, which uses TinyScheme to implement its DSL.
#
# Even though it uses a undocumented format, it’s actually very self-explanatory.
# Because we use a whitelist approach, `(deny default)`, any action that is
# denied is logged to `/var/log/system.log`. So tailing that should provide
# enough information on steps that need to be take to get something to work.
#
# For more information see:
#
# * https://github.com/CocoaPods/CocoaPods/issues/939
# * http://reverse.put.as/wp-content/uploads/2011/08/The-Apple-Sandbox-BHDC2011-Slides.pdf
# * http://reverse.put.as/wp-content/uploads/2011/08/The-Apple-Sandbox-BHDC2011-Paper.pdf
# * https://github.com/s7ephen/OSX-Sandbox--Seatbelt--Profiles
# * `$ man sandbox-exec`
# * `$ ls /usr/share/sandbox`
    
            def run
          print_version
          signal_end_of_output
          listen
        end
    
            # Should be overriden if you have areas of your checkout that don't match
        # up to a step within checkout_steps, such as a registration step
        def skip_state_validation?
          false
        end
    
              @line_item = Spree::Dependencies.cart_add_item_service.constantize.call(order: order,
                                                                                  variant: variant,
                                                                                  quantity: params[:line_item][:quantity],
                                                                                  options: line_item_params[:options]).value
          if @line_item.errors.empty?
            respond_with(@line_item, status: 201, default_template: :show)
          else
            invalid_resource!(@line_item)
          end
        end
    
            def index
          @products = if params[:ids]
                        product_scope.where(id: params[:ids].split(',').flatten)
                      else
                        product_scope.ransack(params[:q]).result
                      end
    
      puts '\n== Preparing database =='
  system! 'bin/rails db:setup'
    
      # The test environment is used exclusively to run your application's
  # test suite. You never need to work with it otherwise. Remember that
  # your test database is 'scratch space' for the test suite and is wiped
  # and recreated between test runs. Don't rely on the data there!
  config.cache_classes = true