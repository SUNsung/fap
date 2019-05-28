
        
        # Just a slash
Benchmark.ips do |x|
  path = '/'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end
    
      p.option 'source', '-s', '--source [DIR]', 'Source directory (defaults to ./)'
  p.option 'destination', '-d', '--destination [DIR]',
    'Destination directory (defaults to ./_site)'
  p.option 'safe', '--safe', 'Safe mode (defaults to false)'
  p.option 'plugins_dir', '-p', '--plugins PLUGINS_DIR1[,PLUGINS_DIR2[,...]]', Array,
    'Plugins directory (defaults to ./_plugins)'
  p.option 'layouts_dir', '--layouts DIR', String,
    'Layouts directory (defaults to ./_layouts)'
  p.option 'profile', '--profile', 'Generate a Liquid rendering profile'
    
    module Jekyll
  module Filters
    module GroupingFilters
      # Group an array of items by a property
      #
      # input - the inputted Enumerable
      # property - the property
      #
      # Returns an array of Hashes, each looking something like this:
      #  {'name'  => 'larry'
      #   'items' => [...] } # all the items where `property` == 'larry'
      def group_by(input, property)
        if groupable?(input)
          groups = input.group_by { |item| item_property(item, property).to_s }
          grouped_array(groups)
        else
          input
        end
      end
    
        status, headers, body = @app.call(env)
    headers ||= {}
    
        plugin.enabled = true
    expect(parse(policy)['script-src']).to include('https://from-plugin.com')
    expect(parse(policy)['object-src']).to include('https://test-stripping.com')
    expect(parse(policy)['object-src']).to_not include(''none'')
    
          render plain: svg_sprite, disposition: nil, content_type: 'application/javascript'
    end
  end
    
              if !poll
            raise StandardError.new I18n.t('poll.no_poll_with_this_name', name: poll_name) if raise_errors
            return
          end
    
    class Api::SalmonController < Api::BaseController
  include SignatureVerification
    
      private