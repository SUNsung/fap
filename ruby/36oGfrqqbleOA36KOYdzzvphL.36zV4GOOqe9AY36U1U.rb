
        
            # See {CapabilityHost#capability}
    def capability(*args)
      super
    rescue Errors::CapabilityNotFound => e
      raise Errors::GuestCapabilityNotFound,
        cap: e.extra_data[:cap],
        guest: name
    rescue Errors::CapabilityInvalid => e
      raise Errors::GuestCapabilityInvalid,
        cap: e.extra_data[:cap],
        guest: name
    end
    
              result
        end
    
            # Defines an additionally available host implementation with
        # the given key.
        #
        # @param [String] name Name of the host.
        def self.host(name=UNSET_VALUE, &block)
          data[:hosts] ||= Registry.new
    
            # This contains all the push implementations by name.
        #
        # @return [Registry<Symbol, Array<Class, Hash>>]
        attr_reader :pushes
    
    require 'log4r'
    
            # This is called early, before a machine is instantiated, to check
        # if this provider is usable. This should return true or false.
        #
        # If raise_error is true, then instead of returning false, this
        # should raise an error with a helpful message about why this
        # provider cannot be used.
        #
        # @param [Boolean] raise_error If true, raise exception if not usable.
        # @return [Boolean]
        def self.usable?(raise_error=false)
          # Return true by default for backwards compat since this was
          # introduced long after providers were being written.
          true
        end
    
    module Homebrew
  module_function
    
        alias log puts
    
    desc 'list of authors'
task :authors, [:commit_range, :format, :sep] do |t, a|
  a.with_defaults :format => '%s (%d)', :sep => ', ', :commit_range => '--all'
  authors = Hash.new(0)
  blake   = 'Blake Mizerany'
  overall = 0
  mapping = {
    'blake.mizerany@gmail.com' => blake, 'bmizerany' => blake,
    'a_user@mac.com' => blake, 'ichverstehe' => 'Harry Vangberg',
    'Wu Jiang (nouse)' => 'Wu Jiang' }
  `git shortlog -s #{a.commit_range}`.lines.map do |line|
    line = line.force_encoding 'binary' if line.respond_to? :force_encoding
    num, name = line.split('\t', 2).map(&:strip)
    authors[mapping[name] || name] += num.to_i
    overall += num.to_i
  end
  puts '#{overall} commits by #{authors.count} authors:'
  puts authors.sort_by { |n,c| -c }.map { |e| a.format % e }.join(a.sep)
end
    
            # Set these key values to boolean 'true' to include in policy
        NO_ARG_DIRECTIVES.each do |d|
          if options.key?(d) && options[d].is_a?(TrueClass)
            directives << d.to_s.sub(/_/, '-')
          end
        end
    
        it 'Returns nil when Referer header is invalid' do
      env = {'HTTP_HOST' => 'foo.com', 'HTTP_REFERER' => 'http://bar.com/bad|uri'}
      expect(subject.referrer(env)).to be_nil
    end
  end
end

    
            def update
          authorize! :update, @order, order_token
          @address = find_address
    
            def log_state_changes
          if @order.previous_changes[:state]
            @order.log_state_changes(
              state_name: 'order',
              old_state: @order.previous_changes[:state].first,
              new_state: @order.previous_changes[:state].last
            )
          end
        end
    
            def destroy
          if @property
            authorize! :destroy, @property
            @property.destroy
            respond_with(@property, status: 204)
          else
            invalid_resource!(@property)
          end
        end
    
            def destroy
          @return_authorization = order.return_authorizations.accessible_by(current_ability, :destroy).find(params[:id])
          @return_authorization.destroy
          respond_with(@return_authorization, status: 204)
        end