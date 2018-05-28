
        
        if defined?(ActionMailer)
  class Devise::Mailer < Devise.parent_mailer.constantize
    include Devise::Mailers::Helpers
    
      def test_timegm
    if negative_time_t?
      assert_equal(-0x80000000, Time.utc(1901, 12, 13, 20, 45, 52).tv_sec)
      assert_equal(-2, Time.utc(1969, 12, 31, 23, 59, 58).tv_sec)
      assert_equal(-1, Time.utc(1969, 12, 31, 23, 59, 59).tv_sec)
    end
    
      def self.counter
    @@counter
  end