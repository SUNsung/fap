
        
        class Converter
  extend Forwardable
  include Network
  include LessConversion
  include JsConversion
  include FontsConversion
    
    desc 'Start a dummy (test) Rails app server'
task :dummy_rails do
  require 'rack'
  require 'term/ansicolor'
  port = ENV['PORT'] || 9292
  puts %Q(Starting on #{Term::ANSIColor.cyan 'http://localhost:#{port}'})
  Rack::Server.start(
    config: 'test/dummy_rails/config.ru',
    Port: port)
end
    
          spec['version'] = Bootstrap::VERSION
    
      def icon
    object.image
  end
    
      let(:user) { Fabricate(:user) }
    
          expect(response).to redirect_to(settings_preferences_path)
      user.reload
      expect(user.locale).to eq 'en'
      expect(user.filtered_languages).to eq ['es', 'fr']
    end
    
    RSpec.describe BlockDomainService do
  let(:bad_account) { Fabricate(:account, username: 'badguy666', domain: 'evil.org') }
  let(:bad_status1) { Fabricate(:status, account: bad_account, text: 'You suck') }
  let(:bad_status2) { Fabricate(:status, account: bad_account, text: 'Hahaha') }
  let(:bad_attachment) { Fabricate(:media_attachment, account: bad_account, status: bad_status2, file: attachment_fixture('attachment.jpg')) }
    
          def update_available?(gem_name)
        latest = Gem.latest_version_for(gem_name)
        return false if latest.nil?
        latest > installed_gem_version(gem_name)
      end
    
          expect('.border-color-all').to have_rule(rule)
    end
  end
    
      context 'called with three styles' do
    it 'applies second style to left and right' do
      rule = 'border-style: dashed double solid'
    
      context 'called with four sizes' do
    it 'applies different widths to all sides' do
      rule = 'margin: 7px 8px 9px 10px'
    
      context 'called with arguments (1, $ratio: $golden-ratio)' do
    it 'output the first value from the golden ratio scale' do
      expect('.one-golden-ratio').to have_rule('font-size: 1.618em')
    end
  end
    
      context 'called with multiple prefixes' do
    it 'applies the prefixes to the property' do
      rule = '-moz-appearance: none; ' +
             '-ms-appearance: none; ' +
             'appearance: none;'
    
          expect('.size-both').to have_ruleset(rule)
    end
  end
    
    describe 'text-inputs' do
  before(:all) do
    ParserSupport.parse_file('library/text-inputs')