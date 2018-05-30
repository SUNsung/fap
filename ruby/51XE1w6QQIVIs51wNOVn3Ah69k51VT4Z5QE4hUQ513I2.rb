
        
          def validate_type
    errors.add(:type, 'cannot be changed once an instance has been created') if type_changed? && !new_record?
    errors.add(:type, 'is not a valid type') unless self.class.valid_type?(type)
  end
    
        # Optional
    #   Use this method the gracefully stop your agent but make sure the run method return, or
    #   terminate the thread.
    def stop; end
  end
end
=end
module LongRunnable
  extend ActiveSupport::Concern
    
      def destroy
    @job = Delayed::Job.find(params[:id])
    
      def destroy
    @services = current_user.services.find(params[:id])
    @services.destroy
    
        t = Time.at(-0x3fff_ffff_ffff_ffff)
    assert_equal(-146138510344, t.year)
    t = Time.at(-0x4000_0000_0000_0000)
    assert_equal(-146138510344, t.year)
    t = Time.at(-0x4000_0000_0000_0001)
    assert_equal(-146138510344, t.year)
    t = Time.at(-0x5000_0000_0000_0001)
    assert_equal(-182673138422, t.year)
    t = Time.at(-0x6000_0000_0000_0000)
    assert_equal(-219207766501, t.year)
    
      def self.critical_thread2(is_thread_stop)
    Thread.current[:thread_specs].should == 101
    Thread.critical.should == !is_thread_stop
    unless is_thread_stop
      Thread.critical = false
    end
  end
    
      it 'interprets Julian-Gregorian gap dates using Gregorian proleptic calendar' do
    Time.send(@method, 1582, 10, 14, 12).to_i.should == -12219336000 # 2299160j
  end
    
    lib_path = root.join('lib').to_path
    
        self.sigs.each_key do |k|
      # There is only one pattern per run to test
      matched = nil
      matches = nil
    
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