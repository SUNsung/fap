
        
          def resource
    @resource ||=
      if params[:project_id].present?
        Project.find(params[:project_id])
      elsif params[:namespace_id].present?
        Group.find(params[:namespace_id])
      end
  end
    
    class U2fRegistration < ActiveRecord::Base
  belongs_to :user
    
            # This returns all the registered commands.
        #
        # @return [Registry<Symbol, Array<Proc, Hash>>]
        def commands
          Registry.new.tap do |result|
            @registered.each do |plugin|
              result.merge!(plugin.components.commands)
            end
          end
        end
    
          def values_at(*indices)
        indices.collect { |key| self[convert_key(key)] }
      end
    
    
class SnifferIMAP < BaseProtocolParser
    
    	if ln =~ /\(jmp\)/
		parts = ln.split(' ')
		if (parts[0][0,1] == 'j' and parts[2][0,2] == ';j' and parts[4] == '(jmp)')
			old = parts[1]
			func = parts[3]
			new = addrs[func]
			#puts '%32s: %s -> %x' % [func, old, new]
			replaces << [func, old, new.to_s(16)]
		end
	end
    
    codez = Array.new