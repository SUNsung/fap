
        
        def check_link(uri)
  HTTParty.head(uri, :verify => false).code.to_i.tap do |status|
    if (400..422).include?(status)
      if status != 403 && !uri.exclude?('udemy.com')
        raise 'Request had status #{status}'
      else
        putc('S')
      end
    end
  end
end
    
      def render(w, h, nsubsamples)
    cnt = 0
    nsf = nsubsamples.to_f
    h.times do |y|
      w.times do |x|
        rad = Vec.new(0.0, 0.0, 0.0)
    
              fd.write(res)
        end
      end
      break
    rescue ::Timeout::Error
      $stderr.puts '#{prefix}#{site} timed out'
    rescue ::Interrupt
      raise $!
    rescue ::Exception => e
      $stderr.puts '#{prefix}#{site} #{e.class} #{e}'
    end
  end
    
            when :err
          case s[:last]
            when :pass
              # Oops got a -ERR after a pass so its crap ignore the pass
              # But report it, might be helpfull for guessing :-)
    
    
# extract label addresses
addrs = {}
dtrans.each_line { |ln|
	if ln =~ /;[^ ].*:/
		parts = ln.split(' ')
		label = parts[1]
		label = label.slice(1,label.index(':')-1)
		addr = parts[0].split(':')[1].to_i(16)
		#puts '%s => %x' % [label, addr]
		one = { label => addr }
		addrs.merge!(one)
	end
}
#puts addrs.inspect
    
            def stock_location
          render 'spree/api/v1/shared/stock_location_required', status: 422 and return unless params[:stock_location_id]
          @stock_location ||= StockLocation.accessible_by(current_ability, :read).find(params[:stock_location_id])
        end