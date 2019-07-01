
        
              expect(exporter.as_json[:control_links]).to eq([{ :controller => guid_order(agent_list, :jane_rain_notifier_agent), :control_target => guid_order(agent_list, :jane_weather_agent) }])
    end
  end
    
      after :each do
    @scheduler.shutdown(:wait)
    
        it 'should raise an exception when encountering complex JSONPaths' do
      expect { LiquidMigrator.convert_string('Received <$.content.text.*> from <$.content.name> .') }.
        to raise_error('JSONPath '$.content.text.*' is too complex, please check your migration.')
    end
  end
    
        it 'should generate the correct specific tracking url' do
      @checker.options['path'] = 'trackings/usps/9361289878905919630610'
      expect(@checker.send(:event_url)).to eq('https://api.aftership.com/v4/trackings/usps/9361289878905919630610')
    end
    
    require 'open-uri'
require 'json'
require 'strscan'
require 'forwardable'
require 'term/ansicolor'
require 'fileutils'
    
      def test_font_helper_with_suffix_sharp
    assert_match %r(url\(['']?/assets/.*svg#.+['']?\)), @css
  end
    
        def each(&block)
      @cookies.each(&block)
    end
    
    module Grape
  module DSL
    module Helpers
      extend ActiveSupport::Concern
      include Grape::DSL::Configuration
    
    Before do |scenario|
  scenario.source_tag_names.each do |tag|
    driver_name = tag.sub(/^@/, '').to_sym
    Capybara.current_driver = driver_name if Capybara.drivers.key?(driver_name)
  end
end

    
      it 'should match correctly normalized title' do
    uri = Addressable::URI.parse('/with_title')
    uri.query_values = { title: ' &nbsp; with space &nbsp;title   ' }
    @session.visit(uri.to_s)
    @session.assert_title('  with space  title')
    expect { @session.assert_title('with space title') }.to raise_error(Capybara::ExpectationNotMet)
  end
    
        it 'should find disabled buttons when :all' do
      expect(@session.find_button('Disabled button', disabled: :all).value).to eq('Disabled button')
    end
  end
    
      it 'should be false if the given link is on the page' do
    expect(@session).not_to have_no_link('foo')
    expect(@session).not_to have_no_link('awesome title')
    expect(@session).not_to have_no_link('A link', href: '/with_simple_html')
  end