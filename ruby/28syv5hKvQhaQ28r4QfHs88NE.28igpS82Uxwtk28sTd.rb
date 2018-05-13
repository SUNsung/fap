
        
          url = File.dirname(url)
  url == FORWARD_SLASH ? url : '#{url}/'
end
    
    # No trailing slash
Benchmark.ips do |x|
  x.report('with body include?') { CONTENT_CONTAINING.include?('<body') }
  x.report('with body regexp')   { CONTENT_CONTAINING =~ /<\s*body/ }
  x.compare!
end

    
    strlen = mimes.keys.max_by(&:length).length
output = ''
output << '# Woah there. Do not edit this file directly.\n'
output << '# This file is generated automatically by script/vendor-mimes.\n\n'
mimes = mimes.sort_by { |k,v| k }
output << mimes.map { |mime,extensions| '#{mime.ljust(strlen)} #{extensions.join(' ')}' }.join('\n')
    
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
    
          self.data = {}
    
          private