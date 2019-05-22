
        
        def remove_head_from_history(markdown)
  index = markdown =~ %r!^##\s+\d+\.\d+\.\d+!
  markdown[index..-1]
end
    
    require 'benchmark/ips'
require 'jekyll'
require 'json'
    
      Jekyll::External.require_if_present(Jekyll::External.blessed_gems) do |g, ver_constraint|
    cmd = g.split('-').last
    p.command(cmd.to_sym) do |c|
      c.syntax cmd
      c.action do
        Jekyll.logger.abort_with 'You must install the '#{g}' gem' \
          ' version #{ver_constraint} to use the 'jekyll #{cmd}' command.'
      end
    end
  end
    
            # rubocop:disable Metrics/AbcSize
        def process(args, opts)
          if !args || args.empty?
            raise Jekyll::Errors::InvalidThemeName, 'You must specify a theme name.'
          end
    
          it 'should be invalid when the referenced url doesn't contain a scenario' do
        stub_request(:get, 'http://example.com/scenarios/1/export.json').to_return(:status => 200, :body => invalid_data)
        subject.url = 'http://example.com/scenarios/1/export.json'
        expect(subject).not_to be_valid
        expect(subject.errors[:base]).to include('The provided data does not appear to be a valid Scenario.')
      end
    
      describe '#working?' do
    it 'it is working when at least one event was emitted' do
      expect(@checker).not_to be_working
      @checker.memory[:last_event] = '2014-04-17T10:25:31.000+02:00'
      @checker.check
      expect(@checker.reload).to be_working
    end
  end
end

    
    Given /^I add this snippet to config\/application.rb:$/ do |snippet|
  file_name = 'config/application.rb'
  cd('.') do
    content = File.read(file_name)
    File.open(file_name, 'w') {|f| f << content.sub(/class Application < Rails::Application.*$/, 'class Application < Rails::Application\n#{snippet}\n')}
  end
end
    
      def self.source_root
    @source_root ||= File.expand_path('../templates', __FILE__)
  end
    
        def initialize
      clear
    end
    
        # Returns a String describing the file's content type
    def detect
      if blank_name?
        SENSIBLE_DEFAULT
      elsif empty_file?
        EMPTY_TYPE
      elsif calculated_type_matches.any?
        calculated_type_matches.first
      else
        type_from_file_contents || SENSIBLE_DEFAULT
      end.to_s
    end
    
        private