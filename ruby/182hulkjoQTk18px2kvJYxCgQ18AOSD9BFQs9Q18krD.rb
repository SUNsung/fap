
        
            def paragraphize(input)
      '<p>#{input.lstrip.rstrip.gsub(/\n\n/, '</p><p>').gsub(/\n/, '<br/>')}</p>'
    end
  end
end
    
    Liquid::Template.register_tag('gist', Jekyll::GistTag)
Liquid::Template.register_tag('gistnocache', Jekyll::GistTagNoCache)

    
    require 'pathname'
require './plugins/octopress_filters'
    
    module Jekyll
    
    module Sidekiq
  module Generators # :nodoc:
    class WorkerGenerator < ::Rails::Generators::NamedBase # :nodoc:
      desc 'This generator creates a Sidekiq Worker in app/workers and a corresponding test'
    
          def perform(yml)
        (target, method_name, args) = YAML.load(yml)
        msg = target.public_send(method_name, *args)
        # The email method can return nil, which causes ActionMailer to return
        # an undeliverable empty message.
        if msg
          deliver(msg)
        else
          raise '#{target.name}##{method_name} returned an undeliverable mail object'
        end
      end
    
          # Jobs queued for this worker
      def jobs
        Queues.jobs_by_worker[self.to_s]
      end
    
      desc 'Clear application's crontab entries using Whenever'
  task :clear_crontab do
    setup_whenever_task do |host|
      [fetch(:whenever_clear_flags), load_file]
    end
  end
    
        assert_match two_hours + %( cd /some/other/path && bundle exec script/runner -e production 'blahblah'), output
  end
    
          every 2.hours, mailto: 'sarah@example.com', :roles => [:role2] do
        command 'blahblah_by_sarah'
      end
    file
    
        def assert_hours_and_minutes_equals(expected, time, options = {})
      cron = parse_time(Whenever.seconds(2, :days), 'some task', time, options)
      minutes, hours, _ = cron.split(' ')
      assert_equal expected, [hours, minutes]
    end
    
    class CapistranoSupportTest < CapistranoTestCase
  should 'return fetch(:whenever_options) from #whenever_options' do
    @capistrano.expects(:fetch).with(:whenever_options)
    @capistrano.whenever_options
  end
    
    file '../README.md' => ['README.md.gen.rb', *LIBS] do
  ruby 'README.md.gen.rb'
end
    
    # each_bit bit tl =
#   ('[->++<]>' concat (tl each_bit))
EachBit =
  [L[:x, [:x, :x]], # recursive
   L[[:self, :bit, :tl, :next],
     [:tl, [:self, :self], [:DblBF, [:bit, [:ConsPlus, :next], :next]]]]]
    
      fn(:kick) {|_kick| start[start, main, next_char[w]] }
    
    # You need to install the two fonts: Raleway and UnifrakturCook.
# * https://www.google.com/fonts/specimen/Raleway
# * https://www.google.com/fonts/specimen/UnifrakturCook
    
      def newline(card)
    # puts 'newline #{card}'
    @line = card.suit
  end
    
      def start(code)
    eval Machine.new(code, InitialEnv, InitialDump)
  end